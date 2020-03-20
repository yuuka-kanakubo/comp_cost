CC = g++
CFLAGS = -g -Wall -std=c++11
TARGET = myprogram
VERSION = 1.0
TARGETV = $(TARGET)-$(VERSION)
INC=cell.h info.h constants.h
SRC=main.cpp
OBJS = main.o
DOCS = $(OBJS:%.o=%.txt)


SAVE =  Makefile $(SRC) $(INC)

ALL: $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp $(INC)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf *.o *~ $(TARGET)


tar:$(TARGETV).tar
$(TARGETV).tar: $(SAVE)
	tar -cvf $(TARGETV).tar $(SAVE)
gzip: $(TARGETV).tar.gz
$(TARGETV).tar.gz: $(TARGETV).tar       
	gzip $(TARGETV).tar

save: $(SAVE) $(TARGETV)
	tar -cvf $(TARGETV).tar $(SAVE)
	cd $(TARGETV); tar -xvf ../$(TARGETV).tar
	tar -cvzf $(TARGETV).tar.gz $(TARGETV)
	rm -rf $(TARGETV) $(TARGETV).tar
$(TARGETV):
	mkdir $(TARGETV)
