.PHONY: configure build test run clean

configure:
	cmake -S . -B build -G Ninja

build: configure
	cmake --build build

test: build
	./build/tests/tests

run: build
	./build/alarm

clean:
	rm -rf build
