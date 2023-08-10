.PHONY: build run clean

configure:
	cmake -S . -B build -G Ninja

build: configure
	cmake --build build

test: build
	ctest --test-dir build/tests

run: test
	./build/alarm

clean:
	rm -rf build Testing
