.PHONY: build run clean

build:
	cmake -S . -B build -G Ninja
	cmake --build build

test: build
	ctest --test-dir build/tests

run: test
	./build/alarm

clean:
	rm -rf build Testing
