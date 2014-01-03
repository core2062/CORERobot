# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))
WRVX_COMPBASE := $(subst \,/,$(WRVX_COMPBASE))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC32diab
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/Users/core2062/offseason
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/CORERobot



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC32
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
LIBPATH = 
LIBS = 

IDE_INCLUDES = -IC:/WindRiver/WPILib/WPILib -I$(WIND_BASE)/target/h 

IDE_LIBRARIES = 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
DEBUGFLAGS_Linker = -XO -Xsize-opt
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif


#Project Targets
PROJECT_TARGETS = CORERobot/$(MODE_DIR)/CORERobot.out \
	 CORERobot_partialImage/$(MODE_DIR)/CORERobot_partialImage.o


#Rules

# CORERobot
ifeq ($(DEBUG_MODE),1)
CORERobot/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CORERobot/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CORERobot/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CORERobot/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CORERobot/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CORERobot/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CORERobot/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
CORERobot/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
CORERobot/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -XO -Xsize-opt
CORERobot/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CORERobot/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CORERobot/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
CORERobot/$(MODE_DIR)/% : IDE_INCLUDES = -IC:/WindRiver/WPILib/WPILib -I$(WIND_BASE)/target/h 
CORERobot/$(MODE_DIR)/% : IDE_LIBRARIES = 
CORERobot/$(MODE_DIR)/% : IDE_DEFINES = 
CORERobot/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CORERobot/$(MODE_DIR)/% : DEFINES = 
CORERobot/$(MODE_DIR)/% : EXPAND_DBG = 0
CORERobot/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CORERobot/$(MODE_DIR)/% : CPU = PPC32
CORERobot/$(MODE_DIR)/% : TOOL_FAMILY = diab
CORERobot/$(MODE_DIR)/% : TOOL = diab
CORERobot/$(MODE_DIR)/% : TOOL_PATH = 
CORERobot/$(MODE_DIR)/% : CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
CORERobot/$(MODE_DIR)/% : LIBPATH = 
CORERobot/$(MODE_DIR)/% : LIBS = 
CORERobot/$(MODE_DIR)/% : OBJ_DIR := CORERobot/$(MODE_DIR)

OBJECTS_CORERobot = CORERobot_partialImage/$(MODE_DIR)/CORERobot_partialImage.o

CORERobot/$(MODE_DIR)/CORERobot.out : $(OBJECTS_CORERobot)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";ddump -Ng $(OBJECTS_CORERobot) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)dcc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -Xdollar-in-ident -Xforce-declarations $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)dld -tPPCFH:vxworks63 -X -r5 -r4 -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_CORERobot) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CORERobot/$(MODE_DIR)/CORERobot_compile_file : $(FILE) ;

_clean :: CORERobot/$(MODE_DIR)/CORERobot_clean

CORERobot/$(MODE_DIR)/CORERobot_clean : 
	$(TRACE_FLAG)if [ -d "CORERobot" ]; then cd "CORERobot"; rm -rf $(MODE_DIR); fi


# CORERobot_partialImage
ifeq ($(DEBUG_MODE),1)
CORERobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CORERobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CORERobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CORERobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CORERobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CORERobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CORERobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
CORERobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
CORERobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -XO -Xsize-opt
CORERobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CORERobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CORERobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
CORERobot_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -IC:/WindRiver/WPILib/WPILib -I$(WIND_BASE)/target/h 
CORERobot_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = 
CORERobot_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
CORERobot_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CORERobot_partialImage/$(MODE_DIR)/% : DEFINES = 
CORERobot_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
CORERobot_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CORERobot_partialImage/$(MODE_DIR)/% : CPU = PPC32
CORERobot_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = diab
CORERobot_partialImage/$(MODE_DIR)/% : TOOL = diab
CORERobot_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
CORERobot_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
CORERobot_partialImage/$(MODE_DIR)/% : LIBPATH = 
CORERobot_partialImage/$(MODE_DIR)/% : LIBS = 
CORERobot_partialImage/$(MODE_DIR)/% : OBJ_DIR := CORERobot_partialImage/$(MODE_DIR)

CORERobot_partialImage/$(MODE_DIR)/Objects/CORERobot/CORERobot/CORERobot.o : $(PRJ_ROOT_DIR)/CORERobot/CORERobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CORERobot_partialImage/$(MODE_DIR)/Objects/CORERobot/CORERobot/JoystickCache.o : $(PRJ_ROOT_DIR)/CORERobot/JoystickCache.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CORERobot_partialImage/$(MODE_DIR)/Objects/CORERobot/test.o : $(PRJ_ROOT_DIR)/test.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CORERobot_partialImage = CORERobot_partialImage/$(MODE_DIR)/Objects/CORERobot/CORERobot/CORERobot.o \
	 CORERobot_partialImage/$(MODE_DIR)/Objects/CORERobot/CORERobot/JoystickCache.o \
	 CORERobot_partialImage/$(MODE_DIR)/Objects/CORERobot/test.o

CORERobot_partialImage/$(MODE_DIR)/CORERobot_partialImage.o : $(OBJECTS_CORERobot_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dld -tPPCFH:vxworks63 -X -r5  -o "$@" $(OBJECTS_CORERobot_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CORERobot_partialImage/$(MODE_DIR)/CORERobot_partialImage_compile_file : $(FILE) ;

_clean :: CORERobot_partialImage/$(MODE_DIR)/CORERobot_partialImage_clean

CORERobot_partialImage/$(MODE_DIR)/CORERobot_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "CORERobot_partialImage" ]; then cd "CORERobot_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := CORERobot_partialImage/$(MODE_DIR)/Objects/CORERobot/CORERobot/CORERobot.d CORERobot_partialImage/$(MODE_DIR)/Objects/CORERobot/CORERobot/JoystickCache.d CORERobot_partialImage/$(MODE_DIR)/Objects/CORERobot/test.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

JOBS?=1
ifeq ($(JOBS),1)
main_all : external_build  $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"
else
main_all : external_build 
	@$(MAKE) -f $(MAKEFILE) --jobs $(JOBS) $(MFLAGS) $(PROJECT_TARGETS);\
	echo "make: built targets of `pwd`"
endif 

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
