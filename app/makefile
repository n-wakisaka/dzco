include ../config

INCLUDE=-I$(PREFIX)/include -I../include -I.
LIB=-L$(PREFIX)/lib -L../lib
BINDIR=$(PREFIX)/bin

CC=gcc
CFLAGS=-ansi -Wall -O3 $(INCLUDE) $(LIB)

LINK=-ldzco `zm-config -l`

COMPILE=$(CC) $(CFLAGS) -o $@ $< $(LINK)

INSTALL=install -m 755

CONFIGGEN=zeda-config-gen
CONFIG=dzco-config
TARGET=$(CONFIG) dz_bode dz_nyquist dz_sim

#####################################################################
all: $(TARGET)

$(CONFIG):
	@echo " GENERATE" $@
	-@rm -f $@
	@$(CONFIGGEN) -I $(PREFIX)/include -L $(PREFIX)/lib -l "$(LINK)" -v $(VERSION) > $@
%: %.c
	@echo " CC	" $<
	@$(COMPILE)
install: $(TARGET)
	@echo " INSTALL	" $^
	@$(INSTALL) $^ $(BINDIR)
clean:
	@echo " CLEAN"
	-@rm -f *.o *~ core $(TARGET)
uninstall:
	@echo " UNINSTALL $(TARGET)"
	-@rm -f $(addprefix $(BINDIR)/, $(TARGET))
