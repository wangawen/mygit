
CC=g++

SCRS=client.cpp

OBJS=$(SCRS:.cpp=.o)

EXES=TEST

all:$(EXES)

$(EXES):$(OBJS)
	$(CC) -o $(EXES) $(OBJS)

$(OBJS):%.o:%.cpp
	$(CC) -o $@ -c $<

clean:
	rm -f $(OBJS)
