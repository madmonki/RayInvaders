RayInvaders: main.o game.o spaceship.o laser.o obstacle.o block.o alien.o mothership.o
	clang++ -o RayInvaders main.o game.o spaceship.o laser.o obstacle.o block.o alien.o mothership.o $(shell pkg-config --libs raylib wayland-client wayland-egl)

main.o: main.cpp
	clang++ -c main.cpp $(shell pkg-config --cflags raylib wayland-client wayland-egl)
	
game.o: game.cpp
	clang++ -c game.cpp $(shell pkg-config --cflags raylib wayland-client wayland-egl)

spaceship.o: spaceship.cpp
	clang++ -c spaceship.cpp $(shell pkg-config --cflags raylib wayland-client wayland-egl)

laser.o: laser.cpp
	clang++ -c laser.cpp $(shell pkg-config --cflags raylib wayland-client wayland-egl)

obstacle.o: obstacle.cpp
	clang++ -c obstacle.cpp $(shell pkg-config --cflags raylib wayland-client wayland-egl)

block.o: block.cpp
	clang++ -c block.cpp $(shell pkg-config --cflags raylib wayland-client wayland-egl)

alien.o: alien.cpp
	clang++ -c alien.cpp $(shell pkg-config --cflags raylib wayland-client wayland-egl)

mothership.o: mothership.cpp
	clang++ -c mothership.cpp $(shell pkg-config --cflags raylib wayland-client wayland-egl)

clean:
	rm -f RayInvaders main.o spaceship.o game.o laser.o obstacle.o block.o alien.o mothership.o
