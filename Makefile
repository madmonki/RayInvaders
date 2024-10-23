RayInvaders: main.o game.o spaceship.o laser.o
	clang++ -o RayInvaders main.o game.o spaceship.o laser.o $(shell pkg-config --libs raylib wayland-client wayland-egl)

main.o: main.cpp
	clang++ -c main.cpp $(shell pkg-config --cflags raylib wayland-client wayland-egl)
	
game.o: game.cpp
	clang++ -c game.cpp $(shell pkg-config --cflags raylib wayland-client wayland-egl)

spaceship.o: spaceship.cpp
	clang++ -c spaceship.cpp $(shell pkg-config --cflags raylib wayland-client wayland-egl)

laser.o: laser.cpp
	clang++ -c laser.cpp $(shell pkg-config --cflags raylib wayland-client wayland-egl)


clean:
	rm -f RayInvaders main.o spaceship.o game.o laser.o
