.PHONY: configure build test run clean

configure:
	cmake -S . -B build -G Ninja

build: configure
	cmake --build build

test: build
	ctest --verbose --test-dir build/tests

run: build
	./build/alarm

clean:
	rm -rf build
