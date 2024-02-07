all: misc install

misc:
	mkdir -p build

install:
	sudo rm /usr/local/include/utils.h -f
	sudo cp ./utils.h /usr/local/include/utils.h
	gcc -o build/test test.c
