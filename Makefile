CC = g++
CFLAGS = -Warray-bounds -Wmisleading-indentation -Wformat=2 -Wmaybe-uninitialized -Wsign-compare -Wconversion -Wshift-overflow=2 -Wshadow -Wdangling-else -D_GLIBCXX_DEBUG -O2 -std=c++17
INCLUDE = -Ipriority_queue -Igraph -Iio
IO = io/io.o
GRAPH = graph/graph.o

dijkstra: io graph out
	$(CC) $(CFLAGS) $(INCLUDE) $(IO) $(GRAPH) src/dijkstra.cpp -o bin/dijkstra

io: $(IO)

graph: $(GRAPH)

out:
	mkdir bin/

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@find . -iname *.o | xargs rm -rf
	@find . -iname __pycache__ | xargs rm -rf
	@rm -rf bin/
