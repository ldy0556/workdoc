OBJS=example_wrap.o 
TARGET=libexample.so  
CPPFLAG=-shared -WI  
CC=gcc 
LDLIB=-lexa
INCLUDE=-I/usr/lib/jvm/java-6-oracle/include/ \
		-I/usr/lib/jvm/java-6-oracle/include/linux/
$(TARGET) : $(OBJS)  
	$(CC) $(CPPFLAG) $(INCLUDE) -o $(TARGET) $(OBJS) $(LDLIB)  
$(OBJS) : %.o : %.c 
	$(CC) -c -fPIC $(INCLUDE) $< -o $@  
clean:  
	-rm -f $(OBJS) 
cleanall:
	-rm -f $(OBJS) example.java exampleJNI.java *.class *.so example_wrap.c
exalib:
	swig -java example.i
	gcc example.c -I/usr/lib/jvm/java-6-oracle/include/ -I/usr/lib/jvm/java-6-oracle/include/linux/  -fPIC -shared -o libexa.so
install:
	cp $(TARGET) /usr/lib
