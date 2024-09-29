BIN=fpr

build:
	mkdir -p ./bin
	g++ -o ./bin/${BIN} ./src/*.cpp

run:
	./bin/${BIN}

test: build run
