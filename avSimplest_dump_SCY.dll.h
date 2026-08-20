typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef RTTIBaseClassDescriptor *RTTIBaseClassDescriptor *32 __((image-base-relative));

typedef RTTIBaseClassDescriptor *32 __((image-base-relative)) *RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative));

typedef struct PMD PMD, *PPMD;

struct PMD {
    int mdisp;
    int pdisp;
    int vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    ImageBaseOffset32 pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative)) pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    ImageBaseOffset32 pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct _RTL_CONDITION_VARIABLE _RTL_CONDITION_VARIABLE, *P_RTL_CONDITION_VARIABLE;

typedef struct _RTL_CONDITION_VARIABLE RTL_CONDITION_VARIABLE;

typedef RTL_CONDITION_VARIABLE *PCONDITION_VARIABLE;

typedef void *PVOID;

struct _RTL_CONDITION_VARIABLE {
    PVOID Ptr;
};

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT *PCONTEXT;

typedef ulong DWORD;

typedef ulonglong ULONG_PTR;

typedef ulonglong DWORD64;

typedef ushort WORD;

typedef union _union_54 _union_54, *P_union_54;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

typedef uchar BYTE;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

struct _struct_55 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_54 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _RTL_SRWLOCK _RTL_SRWLOCK, *P_RTL_SRWLOCK;

typedef struct _RTL_SRWLOCK RTL_SRWLOCK;

typedef RTL_SRWLOCK *PSRWLOCK;

struct _RTL_SRWLOCK {
    PVOID Ptr;
};

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[69];
};

typedef int PMFN;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

typedef struct _s_ThrowInfo _s_ThrowInfo, *P_s_ThrowInfo;

typedef struct _s_ThrowInfo ThrowInfo;

struct _s_ThrowInfo {
    uint attributes;
    PMFN pmfnUnwind;
    int pForwardCompat;
    int pCatchableTypeArray;
};

typedef ulonglong uintptr_t;

typedef ulonglong size_t;

typedef struct _RUNTIME_FUNCTION _RUNTIME_FUNCTION, *P_RUNTIME_FUNCTION;

struct _RUNTIME_FUNCTION {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD UnwindData;
};

typedef struct _RUNTIME_FUNCTION *PRUNTIME_FUNCTION;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

typedef union _union_61 _union_61, *P_union_61;

typedef struct _M128A *PM128A;

typedef struct _struct_62 _struct_62, *P_struct_62;

struct _struct_62 {
    PM128A Xmm0;
    PM128A Xmm1;
    PM128A Xmm2;
    PM128A Xmm3;
    PM128A Xmm4;
    PM128A Xmm5;
    PM128A Xmm6;
    PM128A Xmm7;
    PM128A Xmm8;
    PM128A Xmm9;
    PM128A Xmm10;
    PM128A Xmm11;
    PM128A Xmm12;
    PM128A Xmm13;
    PM128A Xmm14;
    PM128A Xmm15;
};

union _union_61 {
    PM128A FloatingContext[16];
    struct _struct_62 s;
};

typedef union _union_63 _union_63, *P_union_63;

typedef ulonglong *PDWORD64;

typedef struct _struct_64 _struct_64, *P_struct_64;

struct _struct_64 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

union _union_63 {
    PDWORD64 IntegerContext[16];
    struct _struct_64 s;
};

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE, *P_UNWIND_HISTORY_TABLE;

struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
};

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

struct _KNONVOLATILE_CONTEXT_POINTERS {
    union _union_61 u;
    union _union_63 u2;
};

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _UNWIND_HISTORY_TABLE *PUNWIND_HISTORY_TABLE;

typedef void *HANDLE;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS *PKNONVOLATILE_CONTEXT_POINTERS;

typedef EXCEPTION_ROUTINE *PEXCEPTION_ROUTINE;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef ulong ULONG;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef struct HINSTANCE__ *HINSTANCE;

typedef HINSTANCE HMODULE;

typedef int BOOL;

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    dword EndAddress; // Apply ImageBaseOffset32 to see reference
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

typedef struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY64 IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;

struct IMAGE_LOAD_CONFIG_DIRECTORY64 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    qword DeCommitFreeBlockThreshold;
    qword DeCommitTotalFreeThreshold;
    pointer64 LockPrefixTable;
    qword MaximumAllocationSize;
    qword VirtualMemoryThreshold;
    qword ProcessAffinityMask;
    dword ProcessHeapFlags;
    word CsdVersion;
    word DependentLoadFlags;
    pointer64 EditList;
    pointer64 SecurityCookie;
    pointer64 SEHandlerTable;
    qword SEHandlerCount;
    pointer64 GuardCFCCheckFunctionPointer;
    pointer64 GuardCFDispatchFunctionPointer;
    pointer64 GuardCFFunctionTable;
    qword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer64 GuardAddressTakenIatEntryTable;
    qword GuardAddressTakenIatEntryCount;
    pointer64 GuardLongJumpTargetTable;
    qword GuardLongJumpTargetCount;
    pointer64 DynamicValueRelocTable;
    pointer64 CHPEMetadataPointer;
    pointer64 GuardRFFailureRoutine;
    pointer64 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved1;
    pointer64 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved2;
    qword Reserved3;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_THUNK_DATA64 IMAGE_THUNK_DATA64, *PIMAGE_THUNK_DATA64;

struct IMAGE_THUNK_DATA64 {
    qword StartAddressOfRawData;
    qword EndAddressOfRawData;
    qword AddressOfIndex;
    qword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
};

typedef struct MovingObject MovingObject, *PMovingObject;

struct MovingObject { // PlaceHolder Structure
};

typedef struct wAirdrome wAirdrome, *PwAirdrome;

struct wAirdrome { // PlaceHolder Structure
};

typedef struct IHandTracker IHandTracker, *PIHandTracker;

struct IHandTracker { // PlaceHolder Structure
};

typedef struct IDispatcher IDispatcher, *PIDispatcher;

struct IDispatcher { // PlaceHolder Structure
};

typedef struct ISceneObject ISceneObject, *PISceneObject;

struct ISceneObject { // PlaceHolder Structure
};

typedef struct wRadioTransmitter wRadioTransmitter, *PwRadioTransmitter;

struct wRadioTransmitter { // PlaceHolder Structure
};

typedef struct wCommunicator wCommunicator, *PwCommunicator;

struct wCommunicator { // PlaceHolder Structure
};

typedef struct MirrorRenderParams MirrorRenderParams, *PMirrorRenderParams;

struct MirrorRenderParams { // PlaceHolder Structure
};

typedef struct wShellDescriptor wShellDescriptor, *PwShellDescriptor;

struct wShellDescriptor { // PlaceHolder Structure
};

typedef struct IwoLA IwoLA, *PIwoLA;

struct IwoLA { // PlaceHolder Structure
};

typedef struct HMD HMD, *PHMD;

struct HMD { // PlaceHolder Structure
};

typedef struct WorldPluginManager WorldPluginManager, *PWorldPluginManager;

struct WorldPluginManager { // PlaceHolder Structure
};

typedef struct RegisterManager RegisterManager, *PRegisterManager;

struct RegisterManager { // PlaceHolder Structure
};

typedef struct wsFlags wsFlags, *PwsFlags;

struct wsFlags { // PlaceHolder Structure
};

typedef struct wPosition3<double> wPosition3<double>, *PwPosition3<double>;

struct wPosition3<double> { // PlaceHolder Structure
};

typedef struct ClipVolume ClipVolume, *PClipVolume;

struct ClipVolume { // PlaceHolder Structure
};

typedef struct Itrigger Itrigger, *PItrigger;

struct Itrigger { // PlaceHolder Structure
};

typedef struct IView IView, *PIView;

struct IView { // PlaceHolder Structure
};

typedef enum wModulation {
} wModulation;

typedef struct wPosition3<float> wPosition3<float>, *PwPosition3<float>;

struct wPosition3<float> { // PlaceHolder Structure
};

typedef struct smSceneManager smSceneManager, *PsmSceneManager;

struct smSceneManager { // PlaceHolder Structure
};

typedef struct wAmmunitionLaserHoming wAmmunitionLaserHoming, *PwAmmunitionLaserHoming;

struct wAmmunitionLaserHoming { // PlaceHolder Structure
};

typedef struct data_2d_table data_2d_table, *Pdata_2d_table;

struct data_2d_table { // PlaceHolder Structure
};

typedef struct lua_State lua_State, *Plua_State;

struct lua_State { // PlaceHolder Structure
};

typedef struct HeapVector<Graphics::DynamicParam> HeapVector<Graphics::DynamicParam>, *PHeapVector<Graphics::DynamicParam>;

struct HeapVector<Graphics::DynamicParam> { // PlaceHolder Structure
};

typedef struct Aircraft_Descriptor Aircraft_Descriptor, *PAircraft_Descriptor;

struct Aircraft_Descriptor { // PlaceHolder Structure
};

typedef struct wRadioReceiver wRadioReceiver, *PwRadioReceiver;

struct wRadioReceiver { // PlaceHolder Structure
};

typedef struct wsType wsType, *PwsType;

struct wsType { // PlaceHolder Structure
};

typedef struct IwHumanPayload IwHumanPayload, *PIwHumanPayload;

struct IwHumanPayload { // PlaceHolder Structure
};

typedef struct Waypoint Waypoint, *PWaypoint;

struct Waypoint { // PlaceHolder Structure
};

typedef struct DataGuidanceInfo DataGuidanceInfo, *PDataGuidanceInfo;

struct DataGuidanceInfo { // PlaceHolder Structure
};

typedef struct CannonSight CannonSight, *PCannonSight;

struct CannonSight { // PlaceHolder Structure
};

typedef struct ICommandDialogsPanel ICommandDialogsPanel, *PICommandDialogsPanel;

struct ICommandDialogsPanel { // PlaceHolder Structure
};

typedef enum TVScreenCondition {
} TVScreenCondition;

typedef enum wcCoalitionName {
} wcCoalitionName;

typedef struct data_1d_table data_1d_table, *Pdata_1d_table;

struct data_1d_table { // PlaceHolder Structure
};

typedef struct Vec3f Vec3f, *PVec3f;

struct Vec3f { // PlaceHolder Structure
};

typedef struct Vec3d Vec3d, *PVec3d;

struct Vec3d { // PlaceHolder Structure
};

typedef struct BoundingBoxImpl<osg::Vec3f> BoundingBoxImpl<osg::Vec3f>, *PBoundingBoxImpl<osg::Vec3f>;

struct BoundingBoxImpl<osg::Vec3f> { // PlaceHolder Structure
};

typedef struct Vector<3,double> Vector<3,double>, *PVector<3,double>;

struct Vector<3,double> { // PlaceHolder Structure
};

typedef struct Polar Polar, *PPolar;

struct Polar { // PlaceHolder Structure
};

typedef struct Vector<3,float> Vector<3,float>, *PVector<3,float>;

struct Vector<3,float> { // PlaceHolder Structure
};

typedef struct Config Config, *PConfig;

struct Config { // PlaceHolder Structure
};

typedef struct ControlSystem ControlSystem, *PControlSystem;

struct ControlSystem { // PlaceHolder Structure
};

typedef struct Payload Payload, *PPayload;

struct Payload { // PlaceHolder Structure
};

typedef struct AerodyneFM AerodyneFM, *PAerodyneFM;

struct AerodyneFM { // PlaceHolder Structure
};

typedef struct JetEngine JetEngine, *PJetEngine;

struct JetEngine { // PlaceHolder Structure
};

typedef struct DynamicBody DynamicBody, *PDynamicBody;

struct DynamicBody { // PlaceHolder Structure
};

typedef struct Switch Switch, *PSwitch;

struct Switch { // PlaceHolder Structure
};

typedef struct Adapter Adapter, *PAdapter;

struct Adapter { // PlaceHolder Structure
};

typedef struct Wire Wire, *PWire;

struct Wire { // PlaceHolder Structure
};

typedef struct Source Source, *PSource;

struct Source { // PlaceHolder Structure
};

typedef struct AustereEngine AustereEngine, *PAustereEngine;

struct AustereEngine { // PlaceHolder Structure
};

typedef enum EngineOperationalModes {
} EngineOperationalModes;

typedef struct ModelCookie ModelCookie, *PModelCookie;

struct ModelCookie { // PlaceHolder Structure
};

typedef struct VR_options VR_options, *PVR_options;

struct VR_options { // PlaceHolder Structure
};

typedef struct ccCockpitContext ccCockpitContext, *PccCockpitContext;

struct ccCockpitContext { // PlaceHolder Structure
};

typedef struct ccDrawable_BasicTimer ccDrawable_BasicTimer, *PccDrawable_BasicTimer;

struct ccDrawable_BasicTimer { // PlaceHolder Structure
};

typedef struct avCommunicator avCommunicator, *PavCommunicator;

struct avCommunicator { // PlaceHolder Structure
};

typedef struct avLuaRegistrable avLuaRegistrable, *PavLuaRegistrable;

struct avLuaRegistrable { // PlaceHolder Structure
};

typedef struct indicator_geometry indicator_geometry, *Pindicator_geometry;

struct indicator_geometry { // PlaceHolder Structure
};

typedef struct ccMainPanel ccMainPanel, *PccMainPanel;

struct ccMainPanel { // PlaceHolder Structure
};

typedef struct ccMapObjectsBuffer ccMapObjectsBuffer, *PccMapObjectsBuffer;

struct ccMapObjectsBuffer { // PlaceHolder Structure
};

typedef struct avBaseRadio avBaseRadio, *PavBaseRadio;

struct avBaseRadio { // PlaceHolder Structure
};

typedef struct eqLitening_TGP eqLitening_TGP, *PeqLitening_TGP;

struct eqLitening_TGP { // PlaceHolder Structure
};

typedef struct avDamageData avDamageData, *PavDamageData;

struct avDamageData { // PlaceHolder Structure
};

typedef struct avMovingMapPoint avMovingMapPoint, *PavMovingMapPoint;

struct avMovingMapPoint { // PlaceHolder Structure
};

typedef struct ccPanelGauge ccPanelGauge, *PccPanelGauge;

struct ccPanelGauge { // PlaceHolder Structure
};

typedef struct avBasicSensor_SearchTimer avBasicSensor_SearchTimer, *PavBasicSensor_SearchTimer;

struct avBasicSensor_SearchTimer { // PlaceHolder Structure
};

typedef struct indicator_viewport indicator_viewport, *Pindicator_viewport;

struct indicator_viewport { // PlaceHolder Structure
};

typedef struct RocketSight RocketSight, *PRocketSight;

struct RocketSight { // PlaceHolder Structure
};

typedef struct avSimpleElectricSystem avSimpleElectricSystem, *PavSimpleElectricSystem;

struct avSimpleElectricSystem { // PlaceHolder Structure
};

typedef struct ccMovingMap ccMovingMap, *PccMovingMap;

struct ccMovingMap { // PlaceHolder Structure
};

typedef struct avAutostartDevice avAutostartDevice, *PavAutostartDevice;

struct avAutostartDevice { // PlaceHolder Structure
};

typedef struct avMovingMap avMovingMap, *PavMovingMap;

struct avMovingMap { // PlaceHolder Structure
};

typedef struct ccDrawable ccDrawable, *PccDrawable;

struct ccDrawable { // PlaceHolder Structure
};

typedef struct avPlatform avPlatform, *PavPlatform;

struct avPlatform { // PlaceHolder Structure
};

typedef struct avReceiver avReceiver, *PavReceiver;

struct avReceiver { // PlaceHolder Structure
};

typedef struct ccIndicationTemplateBuffer ccIndicationTemplateBuffer, *PccIndicationTemplateBuffer;

struct ccIndicationTemplateBuffer { // PlaceHolder Structure
};

typedef struct avMotor avMotor, *PavMotor;

struct avMotor { // PlaceHolder Structure
};

typedef struct avRangefinder avRangefinder, *PavRangefinder;

struct avRangefinder { // PlaceHolder Structure
};

typedef struct ccIndicator ccIndicator, *PccIndicator;

struct ccIndicator { // PlaceHolder Structure
};

typedef struct SightDevice SightDevice, *PSightDevice;

struct SightDevice { // PlaceHolder Structure
};

typedef struct SimpleOctTree_check_object SimpleOctTree_check_object, *PSimpleOctTree_check_object;

struct SimpleOctTree_check_object { // PlaceHolder Structure
};

typedef struct avLuaDevice avLuaDevice, *PavLuaDevice;

struct avLuaDevice { // PlaceHolder Structure
};

typedef struct avDevice avDevice, *PavDevice;

struct avDevice { // PlaceHolder Structure
};

typedef struct ccContextRelatedObject ccContextRelatedObject, *PccContextRelatedObject;

struct ccContextRelatedObject { // PlaceHolder Structure
};

typedef struct DynamicLaunchZone DynamicLaunchZone, *PDynamicLaunchZone;

struct DynamicLaunchZone { // PlaceHolder Structure
};

typedef enum TGP_STATUS {
} TGP_STATUS;

typedef struct GunSight GunSight, *PGunSight;

struct GunSight { // PlaceHolder Structure
};

typedef struct SimpleOctTreeLoad SimpleOctTreeLoad, *PSimpleOctTreeLoad;

struct SimpleOctTreeLoad { // PlaceHolder Structure
};

typedef struct ccIndicationRenderParser ccIndicationRenderParser, *PccIndicationRenderParser;

struct ccIndicationRenderParser { // PlaceHolder Structure
};

typedef struct ceStringPoly ceStringPoly, *PceStringPoly;

struct ceStringPoly { // PlaceHolder Structure
};

typedef struct avTrackData avTrackData, *PavTrackData;

struct avTrackData { // PlaceHolder Structure
};

typedef struct Device_Mode Device_Mode, *PDevice_Mode;

struct Device_Mode { // PlaceHolder Structure
};

typedef struct ClusterBombSightV2 ClusterBombSightV2, *PClusterBombSightV2;

struct ClusterBombSightV2 { // PlaceHolder Structure
};

typedef struct sensor_frame sensor_frame, *Psensor_frame;

struct sensor_frame { // PlaceHolder Structure
};

typedef struct eqR60 eqR60, *PeqR60;

struct eqR60 { // PlaceHolder Structure
};

typedef struct avDate avDate, *PavDate;

struct avDate { // PlaceHolder Structure
};

typedef struct avBasicElectric avBasicElectric, *PavBasicElectric;

struct avBasicElectric { // PlaceHolder Structure
};

typedef struct avILS avILS, *PavILS;

struct avILS { // PlaceHolder Structure
};

typedef struct BombSight BombSight, *PBombSight;

struct BombSight { // PlaceHolder Structure
};

typedef struct SimpleOctTree SimpleOctTree, *PSimpleOctTree;

struct SimpleOctTree { // PlaceHolder Structure
};

typedef struct avSimpleWeaponSystem avSimpleWeaponSystem, *PavSimpleWeaponSystem;

struct avSimpleWeaponSystem { // PlaceHolder Structure
};

typedef struct Element Element, *PElement;

struct Element { // PlaceHolder Structure
};

typedef struct ClusterBombSight ClusterBombSight, *PClusterBombSight;

struct ClusterBombSight { // PlaceHolder Structure
};

typedef struct avElectricSourceParamDriven avElectricSourceParamDriven, *PavElectricSourceParamDriven;

struct avElectricSourceParamDriven { // PlaceHolder Structure
};

typedef struct ceCircle ceCircle, *PceCircle;

struct ceCircle { // PlaceHolder Structure
};

typedef struct avTVSensor avTVSensor, *PavTVSensor;

struct avTVSensor { // PlaceHolder Structure
};

typedef struct ccArcade_template_buffer ccArcade_template_buffer, *PccArcade_template_buffer;

struct ccArcade_template_buffer { // PlaceHolder Structure
};

typedef struct avDefaultLuaRadio avDefaultLuaRadio, *PavDefaultLuaRadio;

struct avDefaultLuaRadio { // PlaceHolder Structure
};

typedef struct avBreakable avBreakable, *PavBreakable;

struct avBreakable { // PlaceHolder Structure
};

typedef struct avBiruzaGuidanceModule avBiruzaGuidanceModule, *PavBiruzaGuidanceModule;

struct avBiruzaGuidanceModule { // PlaceHolder Structure
};

typedef struct avNavigation_MAC avNavigation_MAC, *PavNavigation_MAC;

struct avNavigation_MAC { // PlaceHolder Structure
};

typedef struct avINSinterface avINSinterface, *PavINSinterface;

struct avINSinterface { // PlaceHolder Structure
};

typedef struct NavigationState NavigationState, *PNavigationState;

struct NavigationState { // PlaceHolder Structure
};

typedef struct FrequencyRanges FrequencyRanges, *PFrequencyRanges;

struct FrequencyRanges { // PlaceHolder Structure
};

typedef enum RadioGUI_Type {
} RadioGUI_Type;

typedef struct double_param_proxy double_param_proxy, *Pdouble_param_proxy;

struct double_param_proxy { // PlaceHolder Structure
};

typedef struct vector<float,ed::allocator128<float>_> vector<float,ed::allocator128<float>_>, *Pvector<float,ed::allocator128<float>_>;

struct vector<float,ed::allocator128<float>_> { // PlaceHolder Structure
};

typedef struct Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter> Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>, *PPtr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter>;

struct Ptr<cockpit::SimpleOctTreeLoad,ed::DefaultDeleter> { // PlaceHolder Structure
};

typedef struct vector<cockpit::ccIndicatorPage*___ptr64,ed::allocator<cockpit::ccIndicatorPage*___ptr64>_> vector<cockpit::ccIndicatorPage*___ptr64,ed::allocator<cockpit::ccIndicatorPage*___ptr64>_>, *Pvector<cockpit::ccIndicatorPage*___ptr64,ed::allocator<cockpit::ccIndicatorPage*___ptr64>_>;

struct vector<cockpit::ccIndicatorPage*___ptr64,ed::allocator<cockpit::ccIndicatorPage*___ptr64>_> { // PlaceHolder Structure
};

typedef struct basic_string<char> basic_string<char>, *Pbasic_string<char>;

struct basic_string<char> { // PlaceHolder Structure
};

typedef struct unique_ptr<model::ModelCookie,model::ModelCookieDeleter> unique_ptr<model::ModelCookie,model::ModelCookieDeleter>, *Punique_ptr<model::ModelCookie,model::ModelCookieDeleter>;

struct unique_ptr<model::ModelCookie,model::ModelCookieDeleter> { // PlaceHolder Structure
};

typedef struct function<enum_ImGui::ed::reg_lambda_call_result___cdecl(void)> function<enum_ImGui::ed::reg_lambda_call_result___cdecl(void)>, *Pfunction<enum_ImGui::ed::reg_lambda_call_result___cdecl(void)>;

struct function<enum_ImGui::ed::reg_lambda_call_result___cdecl(void)> { // PlaceHolder Structure
};

typedef struct basic_string_view<wchar_t,std::char_traits<wchar_t>_> basic_string_view<wchar_t,std::char_traits<wchar_t>_>, *Pbasic_string_view<wchar_t,std::char_traits<wchar_t>_>;

struct basic_string_view<wchar_t,std::char_traits<wchar_t>_> { // PlaceHolder Structure
};

typedef struct ITerrain ITerrain, *PITerrain;

struct ITerrain { // PlaceHolder Structure
};

typedef struct ParentElement ParentElement, *PParentElement;

struct ParentElement { // PlaceHolder Structure
};

typedef struct Factory Factory, *PFactory;

struct Factory { // PlaceHolder Structure
};

typedef struct Identifier Identifier, *PIdentifier;

struct Identifier { // PlaceHolder Structure
};

typedef struct FactoryManager FactoryManager, *PFactoryManager;

struct FactoryManager { // PlaceHolder Structure
};

typedef struct ModelInstance ModelInstance, *PModelInstance;

struct ModelInstance { // PlaceHolder Structure
};

typedef struct Camera Camera, *PCamera;

struct Camera { // PlaceHolder Structure
};

typedef struct effectState effectState, *PeffectState;

struct effectState { // PlaceHolder Structure
};

typedef struct Stream Stream, *PStream;

struct Stream { // PlaceHolder Structure
};

typedef struct GUI GUI, *PGUI;

struct GUI { // PlaceHolder Structure
};

typedef struct EditBoxLine EditBoxLine, *PEditBoxLine;

struct EditBoxLine { // PlaceHolder Structure
};

typedef struct MouseListener MouseListener, *PMouseListener;

struct MouseListener { // PlaceHolder Structure
};

typedef struct WindTableProxy_<float> WindTableProxy_<float>, *PWindTableProxy_<float>;

struct WindTableProxy_<float> { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);




void FUN_7ff8ee6e1060(void);
void FUN_7ff8ee6e1170(void);
void FUN_7ff8ee6e1280(void);
void FUN_7ff8ee6e1390(void);
void FUN_7ff8ee6e14a0(void);
void FUN_7ff8ee6e15b0(void);
void FUN_7ff8ee6e16c0(void);
void FUN_7ff8ee6e17d0(void);
void FUN_7ff8ee6e18e0(void);
void FUN_7ff8ee6e19f0(void);
void FUN_7ff8ee6e1b00(void);
void FUN_7ff8ee6e1c10(void);
void FUN_7ff8ee6e1d30(void);
void FUN_7ff8ee6e1e40(void);
void _guard_check_icall(void);
undefined8 * FUN_7ff8ee6e2050(undefined8 *param_1,longlong param_2);
char * FUN_7ff8ee6e2090(longlong param_1);
undefined8 * FUN_7ff8ee6e20b0(undefined8 *param_1,ulonglong param_2);
undefined8 * FUN_7ff8ee6e2120(undefined8 *param_1);
void FUN_7ff8ee6e2150(void);
undefined8 * FUN_7ff8ee6e2170(undefined8 *param_1,longlong param_2);
undefined8 * FUN_7ff8ee6e21b0(undefined8 *param_1,longlong param_2);
void FUN_7ff8ee6e21f0(void);
void FUN_7ff8ee6e2210(void);
void FUN_7ff8ee6e2230(void);
void thunk_FUN_7ff8ee6e3e70(longlong *param_1);
longlong * FUN_7ff8ee6e2260(longlong *param_1,longlong *param_2);
char FUN_7ff8ee6e2390(longlong *param_1,undefined8 param_2,undefined8 param_3);
void ed_fm_add_local_force(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,undefined8 *param_6);
void ed_fm_add_global_force(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,undefined8 *param_6);
void ed_fm_add_local_force_component(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,undefined8 *param_6);
void ed_fm_add_local_moment(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
longlong * ed_fm_add_global_moment(void);
ulonglong ed_fm_add_local_moment_component(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
ulonglong ed_fm_add_global_moment_component(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void ed_fm_simulate(undefined4 param_1);
void ed_fm_set_surface(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6);
void ed_fm_set_atmosphere(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8);
void ed_fm_set_clouds_density(float *param_1);
void ed_fm_wind_vector_field_update_request(undefined8 param_1);
void ed_fm_wind_vector_field_done(void);
void ed_fm_set_current_mass_state(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7);
void ed_fm_set_current_state(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,undefined8 param_18,undefined8 param_19);
void ed_fm_set_current_state_body_axis(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20);
void ed_fm_set_command(undefined4 param_1,float param_2);
void ed_fm_change_mass(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7);
void ed_fm_set_internal_fuel(undefined4 param_1);
void ed_fm_get_internal_fuel(void);
void ed_fm_set_external_fuel(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5);
void ed_fm_get_external_fuel(void);
void ed_fm_refueling_add_fuel(undefined4 param_1);
void ed_fm_set_draw_args_v2(undefined8 param_1,undefined4 param_2);
void ed_fm_get_shake_amplitude(void);
void ed_fm_configure(undefined8 param_1);
void ed_fm_release(void);
void ed_fm_get_param(undefined4 param_1);
void ed_fm_cold_start(void);
void ed_fm_hot_start(void);
void ed_fm_hot_start_in_air(void);
void ed_fm_make_balance(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,undefined8 param_14,undefined8 param_15);
void ed_fm_enable_debug_info(void);
void ed_fm_debug_watch(undefined4 param_1,undefined8 param_2,undefined8 param_3);
void ed_fm_set_plugin_data_install_path(undefined8 param_1);
void ed_fm_on_planned_failure(undefined8 param_1);
void ed_fm_on_damage(undefined4 param_1,undefined4 param_2);
void ed_fm_repair(void);
void ed_fm_need_to_be_repaired(void);
void ed_fm_set_immortal(undefined1 param_1);
void ed_fm_unlimited_fuel(undefined1 param_1);
void ed_fm_set_easy_flight(undefined1 param_1);
void ed_fm_set_property_numeric(undefined8 param_1,undefined4 param_2);
void ed_fm_set_property_string(undefined8 param_1,undefined8 param_2);
void ed_fm_pop_simulation_event(undefined8 param_1);
void ed_fm_push_simulation_event(undefined8 param_1);
void ed_fm_suspension_feedback(undefined4 param_1,undefined8 param_2);
void ed_fm_LERX_vortex_update(undefined4 param_1,undefined8 param_2);
void ed_fm_restricted_payload_calculate_drag(void);
void ed_fm_restricted_payload_feedback(undefined4 param_1,undefined8 param_2);
void ed_fm_restricted_set_pointer_to_self(undefined8 param_1);
longlong * FUN_7ff8ee6e3ca0(undefined8 param_1,ulonglong *param_2);
undefined8 * FUN_7ff8ee6e3d90(undefined8 *param_1,void *param_2);
void FUN_7ff8ee6e3e70(longlong *param_1);
undefined8 *FUN_7ff8ee6e3ef0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,void *param_4,size_t param_5);
longlong * FUN_7ff8ee6e4040(longlong *param_1,longlong *param_2,longlong *param_3);
ulonglong FUN_7ff8ee6e42a0(size_t param_1);
undefined8 * FUN_7ff8ee6e4330(undefined8 *param_1,ulonglong param_2);
undefined8 * FUN_7ff8ee6e4360(undefined8 *param_1,ulonglong param_2);
void FUN_7ff8ee6e4390(undefined8 param_1,longlong *param_2);
undefined8 * FUN_7ff8ee6e43b0(longlong *param_1,undefined8 *param_2);
undefined8 * FUN_7ff8ee6e4480(undefined8 *param_1,undefined8 *param_2);
void FUN_7ff8ee6e4550(longlong *param_1);
void FUN_7ff8ee6e45f0(eqLitening_TGP *param_1,double param_2);
void FUN_7ff8ee6e4740(longlong *param_1);
void FUN_7ff8ee6e4790(longlong *param_1,double *param_2);
eqLitening_TGP * FUN_7ff8ee6e47e0(eqLitening_TGP *param_1,uint param_2);
void FUN_7ff8ee6e4850(eqLitening_TGP *param_1);
void FUN_7ff8ee6e48b0(longlong param_1);
void FUN_7ff8ee6e48e0(longlong param_1);
void FUN_7ff8ee6e4920(longlong param_1,longlong param_2);
undefined8 FUN_7ff8ee6e4960(longlong param_1);
undefined8 FUN_7ff8ee6e4a30(longlong param_1);
void FUN_7ff8ee6e4b60(avLuaDevice *param_1,lua_State *param_2,int param_3);
avLuaDevice * FUN_7ff8ee6e4cb0(avLuaDevice *param_1);
void FUN_7ff8ee6e51c0(avLuaDevice *param_1,uchar param_2,basic_string<char> *param_3,basic_string<char> *param_4);
void FUN_7ff8ee6e6c90(avDate *param_1,undefined8 param_2,size_t param_3);
void FUN_7ff8ee6e6fb0(avLuaDevice *param_1);
void FUN_7ff8ee6e7510(avAutostartDevice *param_1,int param_2,float param_3);
void FUN_7ff8ee6e7a90(longlong param_1);
avLuaDevice * FUN_7ff8ee6e7bc0(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
void FUN_7ff8ee6e7c40(longlong *param_1,undefined8 *param_2);
void FUN_7ff8ee6e7da0(longlong *param_1);
Factory * FUN_7ff8ee6e7dc0(Factory *param_1,uint param_2);
void FUN_7ff8ee6e7e10(double *param_1,double *param_2,longlong param_3,undefined1 param_4);
void FUN_7ff8ee6e8100(ulonglong *param_1,void *param_2,ulonglong param_3);
void FUN_7ff8ee6e8270(longlong *param_1,longlong *param_2);
undefined8 * FUN_7ff8ee6e82e0(undefined8 param_1,longlong param_2);
ulonglong FUN_7ff8ee6e8340(longlong param_1,undefined8 param_2);
void FUN_7ff8ee6e83c0(longlong param_1);
void FUN_7ff8ee6e83e0(void);
void FUN_7ff8ee6e8450(longlong *param_1);
undefined8 * FUN_7ff8ee6e84c0(undefined8 *param_1,ulonglong param_2);
Factory * FUN_7ff8ee6e84f0(Factory *param_1,uint param_2);
ulonglong * FUN_7ff8ee6e8540(ulonglong *param_1,double *param_2,double *param_3);
longlong * FUN_7ff8ee6e8820(longlong *param_1,longlong *param_2,longlong *param_3);
void FUN_7ff8ee6e8a40(double *param_1,double *param_2,double *param_3);
void FUN_7ff8ee6e8be0(void);
void FUN_7ff8ee6e8c00(longlong *param_1,longlong param_2,longlong param_3,longlong param_4);
undefined8 * FUN_7ff8ee6e8ca0(undefined8 *param_1,uint param_2);
avLuaDevice * FUN_7ff8ee6e8cf0(avLuaDevice *param_1,uint param_2);
void FUN_7ff8ee6e8d50(avLuaDevice *param_1,uchar param_2,basic_string<char> *param_3,basic_string<char> *param_4);
void FUN_7ff8ee6e8e50(avDate *param_1);
void FUN_7ff8ee6e8f60(avLuaDevice *param_1,lua_State *param_2,int param_3);
undefined8 FUN_7ff8ee6e9100(longlong param_1);
undefined8 FUN_7ff8ee6e9150(longlong param_1);
undefined8 FUN_7ff8ee6e91a0(longlong param_1);
undefined8 FUN_7ff8ee6e91f0(longlong param_1);
undefined8 FUN_7ff8ee6e9240(longlong param_1);
undefined8 FUN_7ff8ee6e9290(longlong param_1);
undefined8 FUN_7ff8ee6e92e0(longlong param_1);
undefined8 FUN_7ff8ee6e9330(longlong param_1);
longlong FUN_7ff8ee6e9380(longlong param_1);
avLuaDevice * FUN_7ff8ee6e9470(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
Factory * FUN_7ff8ee6e95d0(Factory *param_1,uint param_2);
void FUN_7ff8ee6e9610(void);
void FUN_7ff8ee6e9680(float *param_1,undefined8 param_2,longlong param_3,undefined8 param_4);
void FUN_7ff8ee6e9880(longlong param_1,undefined8 param_2);
void FUN_7ff8ee6e98a0(longlong param_1);
undefined8 * FUN_7ff8ee6e98c0(undefined8 *param_1,uint param_2);
void FUN_7ff8ee6e9920(longlong param_1);
longlong * FUN_7ff8ee6e9ab0(longlong *param_1,ulonglong *param_2);
void FUN_7ff8ee6e9bc0(longlong *param_1);
undefined4 * FUN_7ff8ee6e9c30(undefined4 *param_1);
longlong * FUN_7ff8ee6e9cb0(longlong param_1,longlong *param_2,longlong *param_3);
longlong * FUN_7ff8ee6e9da0(float *param_1,longlong *param_2,longlong *param_3);
longlong *FUN_7ff8ee6e9ff0(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4);
void FUN_7ff8ee6ea0c0(longlong *param_1,undefined8 *param_2,undefined8 *param_3);
void FUN_7ff8ee6ea2d0(longlong param_1);
void FUN_7ff8ee6ea310(ulonglong *param_1,ulonglong param_2,undefined8 param_3);
void FUN_7ff8ee6ea420(longlong *param_1);
void FUN_7ff8ee6ea520(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void FUN_7ff8ee6ea5b0(longlong param_1);
longlong * FUN_7ff8ee6ea630(longlong *param_1,longlong *param_2);
void FUN_7ff8ee6eab30(longlong param_1,ulonglong param_2);
ulonglong FUN_7ff8ee6eae00(float *param_1,ulonglong param_2);
longlong * FUN_7ff8ee6eaea0(longlong param_1,longlong *param_2,longlong *param_3);
void FUN_7ff8ee6eb0b0(longlong *param_1,undefined4 *param_2);
void FUN_7ff8ee6eb0f0(longlong *param_1,float *param_2,float *param_3);
undefined8 FUN_7ff8ee6eb760(void);
undefined8 * FUN_7ff8ee6eb770(undefined8 *param_1,ulonglong param_2);
void FUN_7ff8ee6eb7a0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_7ff8ee6eb7e0(longlong param_1,float param_2,float param_3,float param_4,float param_5,float param_6,float param_7);
undefined8 FUN_7ff8ee6eb990(longlong param_1,double param_2,double param_3,double param_4,double param_5);
undefined8 * FUN_7ff8ee6eba90(undefined8 *param_1,ulonglong param_2);
void FUN_7ff8ee6ebae0(ccMapObjectsBuffer *param_1,avMovingMapPoint *param_2);
undefined8 * FUN_7ff8ee6ebb10(longlong param_1,undefined8 *param_2);
ccMapObjectsBuffer * FUN_7ff8ee6ebb20(ccMapObjectsBuffer *param_1,uint param_2);
ulonglong FUN_7ff8ee6ebb60(longlong param_1,longlong param_2);
undefined1 FUN_7ff8ee6ebd20(void);
void FUN_7ff8ee6ebd40(avDevice *param_1,uchar param_2,basic_string<char> *param_3,basic_string<char> *param_4);
void FUN_7ff8ee6ebe50(avDevice *param_1);
void FUN_7ff8ee6ebee0(avDevice *param_1);
void FUN_7ff8ee6ec180(longlong param_1);
void FUN_7ff8ee6ec390(longlong param_1);
undefined8 FUN_7ff8ee6ec8a0(longlong param_1,double *param_2);
float * FUN_7ff8ee6ec8f0(longlong param_1,float *param_2);
avDevice * FUN_7ff8ee6ec960(avDevice *param_1,uint param_2);
void FUN_7ff8ee6ecab0(longlong *param_1);
avDevice * FUN_7ff8ee6ecad0(avDevice *param_1,uint param_2);
void FUN_7ff8ee6ecb10(longlong *param_1);
void FUN_7ff8ee6ecb70(longlong param_1);
void FUN_7ff8ee6ecbf0(ccIndicator *param_1,avDevice *param_2,uchar param_3,basic_string<char> *param_4);
void FUN_7ff8ee6ed150(avDate *param_1);
void FUN_7ff8ee6ed2d0(undefined8 param_1,ccDrawable *param_2,longlong *param_3);
void FUN_7ff8ee6ed420(longlong *param_1,ccDrawable *param_2,undefined8 *param_3);
void FUN_7ff8ee6ed9f0(longlong *param_1,ccDrawable *param_2);
void FUN_7ff8ee6edb20(longlong *param_1,ccDrawable *param_2);
void FUN_7ff8ee6ee290(longlong *param_1,ccDrawable *param_2);
ccIndicator * FUN_7ff8ee6ee9f0(ccIndicator *param_1,uint param_2);
ccIndicator * FUN_7ff8ee6eea70(ccIndicator *param_1,uint param_2);
undefined4 FUN_7ff8ee6eeac0(ccDrawable *param_1);
void FUN_7ff8ee6eebf0(ccDrawable *param_1,undefined8 *param_2);
undefined4 * FUN_7ff8ee6eec90(undefined4 *param_1,undefined4 *param_2);
undefined8 FUN_7ff8ee6ef200(longlong param_1);
undefined8 FUN_7ff8ee6ef900(avINSinterface *param_1);
void FUN_7ff8ee6f14d0(void);
ccIndicator * FUN_7ff8ee6f1660(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
ccContextRelatedObject * FUN_7ff8ee6f1730(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
void FUN_7ff8ee6f1900(longlong *param_1);
undefined4 * FUN_7ff8ee6f1990(longlong *param_1,int param_2);
float * FUN_7ff8ee6f1a10(float *param_1,float *param_2);
float * FUN_7ff8ee6f1ca0(float *param_1,float *param_2,float *param_3);
double * FUN_7ff8ee6f1fc0(double *param_1,double *param_2);
double * FUN_7ff8ee6f23d0(double *param_1,double *param_2,double *param_3);
Factory * FUN_7ff8ee6f2690(Factory *param_1,uint param_2);
Factory * FUN_7ff8ee6f26d0(Factory *param_1,uint param_2);
longlong * FUN_7ff8ee6f2710(float *param_1,longlong *param_2,longlong *param_3);
void FUN_7ff8ee6f29e0(void);
void FUN_7ff8ee6f2a50(void);
undefined8 * FUN_7ff8ee6f2ac0(longlong *param_1,void *param_2,undefined8 *param_3);
void * FUN_7ff8ee6f2cb0(longlong *param_1,void *param_2,undefined8 *param_3);
void FUN_7ff8ee6f2e30(undefined8 param_1,undefined8 param_2,longlong *param_3);
void FUN_7ff8ee6f2e80(longlong param_1);
void FUN_7ff8ee6f2ec0(void *param_1,char param_2);
longlong FUN_7ff8ee6f2ed0(longlong param_1);
TypeDescriptor * FUN_7ff8ee6f2ee0(void);
void FUN_7ff8ee6f2ef0(longlong param_1);
undefined8 * FUN_7ff8ee6f2f10(longlong param_1,undefined8 *param_2);
TypeDescriptor * FUN_7ff8ee6f2f30(void);
undefined8 * FUN_7ff8ee6f2f40(longlong param_1,undefined8 *param_2);
void FUN_7ff8ee6f2f80(longlong param_1,ulonglong param_2);
avLuaDevice * FUN_7ff8ee6f3320(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
Factory * FUN_7ff8ee6f33c0(Factory *param_1,uint param_2);
avLuaDevice * FUN_7ff8ee6f3400(avLuaDevice *param_1,uint param_2);
void FUN_7ff8ee6f3440(void);
avBaseRadio * FUN_7ff8ee6f34c0(avBaseRadio *param_1,uint param_2);
void FUN_7ff8ee6f35b0(avBaseRadio *param_1);
void FUN_7ff8ee6f35e0(avBaseRadio *param_1,uchar param_2,basic_string<char> *param_3,basic_string<char> *param_4);
void FUN_7ff8ee6f3c90(avDate *param_1);
ulonglong FUN_7ff8ee6f3ed0(avDevice *param_1,double param_2,wModulation param_3,Config *param_4);
void FUN_7ff8ee6f4130(longlong param_1);
void FUN_7ff8ee6f4440(avBaseRadio *param_1);
int FUN_7ff8ee6f44c0(longlong param_1);
void FUN_7ff8ee6f44e0(avBaseRadio *param_1,uint param_2);
void FUN_7ff8ee6f4540(longlong *param_1);
void FUN_7ff8ee6f4560(avDevice *param_1,int param_2,float param_3);
void FUN_7ff8ee6f4660(avBaseRadio *param_1,lua_State *param_2,int param_3);
undefined8 FUN_7ff8ee6f4a80(longlong param_1);
undefined8 FUN_7ff8ee6f4af0(longlong param_1);
undefined8 FUN_7ff8ee6f4b30(longlong param_1);
undefined8 FUN_7ff8ee6f4b60(longlong param_1);
undefined8 FUN_7ff8ee6f4ba0(longlong param_1);
undefined8 FUN_7ff8ee6f4be0(longlong param_1);
undefined8 FUN_7ff8ee6f4c10(longlong param_1);
undefined8 FUN_7ff8ee6f4c70(longlong param_1);
undefined8 FUN_7ff8ee6f4cb0(longlong param_1);
undefined8 FUN_7ff8ee6f4d80(longlong param_1);
undefined8 FUN_7ff8ee6f4df0(longlong param_1);
undefined8 FUN_7ff8ee6f4e60(longlong param_1);
undefined8 FUN_7ff8ee6f4ea0(longlong param_1);
undefined8 FUN_7ff8ee6f4ee0(longlong param_1);
undefined8 FUN_7ff8ee6f4f40(longlong param_1);
undefined8 FUN_7ff8ee6f4f80(longlong param_1);
undefined8 FUN_7ff8ee6f4fe0(longlong param_1);
undefined8 FUN_7ff8ee6f5040(longlong param_1);
undefined8 FUN_7ff8ee6f50a0(longlong param_1);
undefined8 FUN_7ff8ee6f50e0(longlong param_1);
undefined8 FUN_7ff8ee6f5140(longlong param_1);
undefined8 FUN_7ff8ee6f51a0(longlong param_1);
undefined8 FUN_7ff8ee6f51e0(avBaseRadio *param_1);
avBaseRadio * FUN_7ff8ee6f5910(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
void FUN_7ff8ee6f5b10(longlong *param_1,undefined4 *param_2);
void FUN_7ff8ee6f5c30(longlong *param_1);
Factory * FUN_7ff8ee6f5ca0(Factory *param_1,uint param_2);
undefined8 * FUN_7ff8ee6f5ce0(undefined8 param_1,longlong param_2);
ulonglong FUN_7ff8ee6f5d40(longlong param_1,undefined8 param_2);
void FUN_7ff8ee6f5dc0(void);
void FUN_7ff8ee6f5e30(float *param_1,undefined8 param_2,longlong param_3,undefined8 param_4);
undefined8 * FUN_7ff8ee6f6030(undefined8 *param_1,uint param_2);
TypeDescriptor * FUN_7ff8ee6f6090(void);
undefined8 * FUN_7ff8ee6f60a0(longlong param_1,undefined8 *param_2);
void FUN_7ff8ee6f60c0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4);
void FUN_7ff8ee6f6160(avLuaDevice *param_1,lua_State *param_2,int param_3);
undefined8 FUN_7ff8ee6f61b0(undefined8 param_1);
avLuaDevice * FUN_7ff8ee6f6490(avLuaDevice *param_1,uint param_2);
avLuaDevice * FUN_7ff8ee6f64f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
Factory * FUN_7ff8ee6f6590(Factory *param_1,uint param_2);
void FUN_7ff8ee6f65d0(void);
void FUN_7ff8ee6f66b0(avINSinterface *param_1,int param_2,int param_3);
void FUN_7ff8ee6f6850(avSimpleWeaponSystem *param_1,lua_State *param_2,int param_3);
undefined8 FUN_7ff8ee6f68a0(longlong param_1);
undefined8 FUN_7ff8ee6f6940(longlong param_1);
undefined8 FUN_7ff8ee6f69e0(longlong param_1);
undefined8 FUN_7ff8ee6f6b50(longlong param_1);
undefined8 FUN_7ff8ee6f6c90(longlong param_1);
void FUN_7ff8ee6f6dc0(longlong *param_1,undefined8 param_2);
avSimpleWeaponSystem * FUN_7ff8ee6f6eb0(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
Factory * FUN_7ff8ee6f6fc0(Factory *param_1,uint param_2);
void FUN_7ff8ee6f7000(void);
ccIndicator * FUN_7ff8ee6f7080(ccIndicator *param_1,uint param_2);
void FUN_7ff8ee6f70d0(ccIndicator *param_1,avDevice *param_2,uchar param_3,basic_string<char> *param_4);
void FUN_7ff8ee6f7390(avDate *param_1);
ccDrawable * FUN_7ff8ee6f7410(ccDrawable *param_1);
double * FUN_7ff8ee6f7670(ccDrawable *param_1,double *param_2);
void FUN_7ff8ee6f77b0(ccDrawable *param_1);
undefined4 FUN_7ff8ee6f7820(ccDrawable *param_1);
undefined8 FUN_7ff8ee6f78e0(avINSinterface *param_1);
ccIndicator * FUN_7ff8ee6f8a30(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
Factory * FUN_7ff8ee6f8b10(Factory *param_1,uint param_2);
void FUN_7ff8ee6f8b50(void);
TypeDescriptor * FUN_7ff8ee6f8bc0(void);
undefined8 * FUN_7ff8ee6f8bd0(longlong param_1,undefined8 *param_2);
void FUN_7ff8ee6f8bf0(avDate *param_1);
void FUN_7ff8ee6f8c50(longlong *param_1,undefined8 param_2);
ccIndicator * FUN_7ff8ee6f8da0(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
Factory * FUN_7ff8ee6f8e30(Factory *param_1,uint param_2);
ccIndicator * FUN_7ff8ee6f8e70(ccIndicator *param_1,uint param_2);
void FUN_7ff8ee6f8eb0(void);
void FUN_7ff8ee6f8f20(avDate *param_1);
void FUN_7ff8ee6f8ff0(Element *param_1,ccDrawable *param_2,longlong *param_3);
void FUN_7ff8ee6f92d0(undefined8 param_1,ccDrawable *param_2,longlong *param_3);
void FUN_7ff8ee6f9660(undefined8 param_1);
ccIndicator * FUN_7ff8ee6f9830(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
longlong * FUN_7ff8ee6f98b0(longlong *param_1,int *param_2);
void FUN_7ff8ee6f99b0(longlong *param_1,undefined8 *param_2);
ccIndicator * FUN_7ff8ee6f9b40(ccIndicator *param_1);
Factory * FUN_7ff8ee6f9bb0(Factory *param_1,uint param_2);
ccIndicator * FUN_7ff8ee6f9bf0(ccIndicator *param_1,uint param_2);
void FUN_7ff8ee6f9c30(ccIndicator *param_1);
void FUN_7ff8ee6f9cb0(void);
void FUN_7ff8ee6f9d20(ccIndicator *param_1,avDevice *param_2,uchar param_3,basic_string<char> *param_4);
avINSinterface * FUN_7ff8ee6f9dc0(avINSinterface *param_1);
undefined8 * FUN_7ff8ee6fa010(longlong param_1,undefined8 *param_2);
int FUN_7ff8ee6fa0b0(longlong param_1);
ccIndicator * FUN_7ff8ee6fa180(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
Factory * FUN_7ff8ee6fa2b0(Factory *param_1,uint param_2);
ccIndicator * FUN_7ff8ee6fa2f0(ccIndicator *param_1,uint param_2);
void FUN_7ff8ee6fa340(void);
undefined8 * FUN_7ff8ee6fa3b0(undefined8 *param_1,uint param_2);
void FUN_7ff8ee6fa410(float *param_1,undefined8 param_2,longlong param_3,undefined8 param_4);
undefined1 FUN_7ff8ee6fa610(longlong param_1,float param_2,float param_3,float param_4,float param_5);
undefined8 FUN_7ff8ee6fa6e0(longlong param_1,float param_2,float param_3,float param_4,float param_5,float param_6,float param_7);
undefined8 FUN_7ff8ee6fa7c0(longlong param_1,longlong param_2);
MouseListener * FUN_7ff8ee6faa50(MouseListener *param_1,uint param_2);
void FUN_7ff8ee6faa90(longlong param_1);
void FUN_7ff8ee6fb6e0(longlong param_1);
void FUN_7ff8ee6fb730(ccIndicator *param_1,avDevice *param_2,uchar param_3,basic_string<char> *param_4);
void FUN_7ff8ee6fb840(ccDrawable *param_1,undefined4 param_2,undefined4 param_3);
void FUN_7ff8ee6fb960(avDate *param_1);
void FUN_7ff8ee6fb9c0(longlong *param_1,longlong param_2,undefined8 *param_3);
SimpleOctTreeLoad * FUN_7ff8ee6fbdd0(SimpleOctTreeLoad *param_1,uint param_2);
float * FUN_7ff8ee6fbe10(float *param_1,float *param_2);
float * FUN_7ff8ee6fc210(float *param_1,float *param_2,float *param_3);
undefined8 * FUN_7ff8ee6fc4c0(undefined8 *param_1,ulonglong param_2);
undefined8 * FUN_7ff8ee6fc510(undefined8 *param_1,uint param_2);
undefined8 * FUN_7ff8ee6fc560(undefined8 *param_1,uint param_2);
void FUN_7ff8ee6fc5c0(undefined8 *param_1);
undefined8 * FUN_7ff8ee6fc640(undefined8 *param_1,uint param_2);
undefined8 FUN_7ff8ee6fc680(void);
void FUN_7ff8ee6fc690(longlong param_1,undefined1 param_2);
void FUN_7ff8ee6fc6a0(longlong param_1,undefined1 param_2);
void FUN_7ff8ee6fc6b0(longlong param_1,undefined1 param_2);
undefined1 FUN_7ff8ee6fc6c0(longlong param_1);
ulonglong FUN_7ff8ee6fc6d0(longlong param_1,undefined8 *param_2,undefined8 *param_3);
ulonglong FUN_7ff8ee6fc7e0(longlong param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 FUN_7ff8ee6fc8f0(longlong param_1,undefined8 *param_2);
undefined8 FUN_7ff8ee6fc980(longlong param_1,undefined8 *param_2);
void FUN_7ff8ee6fca20(longlong param_1);
void FUN_7ff8ee6fcaa0(longlong *param_1);
double FUN_7ff8ee6fcb10(longlong param_1,longlong param_2);
undefined8 * FUN_7ff8ee6fcca0(undefined8 *param_1,int param_2,void *param_3,void *param_4);
double FUN_7ff8ee6fcd70(longlong param_1,double *param_2);
undefined8 * FUN_7ff8ee6fce70(undefined8 *param_1);
undefined4 * FUN_7ff8ee6fd780(undefined4 *param_1);
longlong FUN_7ff8ee6fd8c0(longlong param_1);
void FUN_7ff8ee6fd980(longlong param_1,double *param_2,undefined8 *param_3);
void FUN_7ff8ee6fdaf0(longlong param_1,double *param_2);
void FUN_7ff8ee6fdbf0(longlong *param_1,double param_2);
void FUN_7ff8ee6fdd50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 *param_7);
void FUN_7ff8ee6fdda0(longlong param_1,double param_2,double *param_3);
void FUN_7ff8ee6fde30(longlong param_1,undefined8 *param_2,double *param_3,undefined8 *param_4,undefined8 *param_5,undefined8 *param_6);
void FUN_7ff8ee6fdf20(longlong param_1,double *param_2,double *param_3,double *param_4,undefined8 *param_5,double *param_6,double param_7,double param_8,double param_9,double param_10,double param_11);
longlong FUN_7ff8ee6fe4d0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8);
void FUN_7ff8ee6fe610(longlong param_1,char *param_2,void *param_3);
void FUN_7ff8ee6fe800(longlong param_1,void *param_2);
void FUN_7ff8ee6fe840(longlong param_1);
ulonglong FUN_7ff8ee6fe930(void);
undefined8 FUN_7ff8ee6fe980(longlong param_1,undefined4 *param_2);
void FUN_7ff8ee6fe9f0(longlong param_1,AerodyneFM *param_2);
void FUN_7ff8ee6fea30(longlong param_1);
void FUN_7ff8ee6feaa0(longlong param_1);
undefined1 FUN_7ff8ee6fed00(longlong param_1,int param_2);
void FUN_7ff8ee6fed10(longlong *param_1,undefined8 param_2);
void FUN_7ff8ee6feda0(longlong *param_1,undefined1 param_2,undefined1 param_3);
void FUN_7ff8ee6fee00(longlong param_1,int param_2,double param_3);
double FUN_7ff8ee6feed0(longlong param_1);
undefined8 * FUN_7ff8ee6fef50(undefined8 *param_1,undefined8 param_2);
undefined8 * FUN_7ff8ee6feff0(undefined8 *param_1,uint param_2);
void FUN_7ff8ee6ff030(undefined8 *param_1);
void FUN_7ff8ee6ff0d0(longlong *param_1);
void FUN_7ff8ee6ff160(longlong *param_1);
void FUN_7ff8ee6ff1d0(longlong *param_1);
void FUN_7ff8ee6ff260(longlong *param_1);
void FUN_7ff8ee6ff2c0(longlong *param_1);
void FUN_7ff8ee6ff350(longlong *param_1);
void * FUN_7ff8ee6ff3c0(undefined8 param_1,void *param_2,undefined8 *param_3);
undefined8 * FUN_7ff8ee6ff550(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_7ff8ee6ff7f0(longlong *param_1,void *param_2,undefined8 *param_3);
void FUN_7ff8ee6ff950(undefined8 *param_1);
undefined8 FUN_7ff8ee6ffac0(longlong param_1);
undefined8 FUN_7ff8ee6ffad0(longlong param_1);
undefined8 FUN_7ff8ee6ffae0(longlong param_1);
undefined8 FUN_7ff8ee6ffaf0(longlong param_1);
undefined8 FUN_7ff8ee6ffb00(longlong param_1);
undefined8 FUN_7ff8ee6ffb10(longlong param_1);
void FUN_7ff8ee6ffb20(longlong param_1,undefined8 param_2);
undefined8 FUN_7ff8ee6ffb30(longlong param_1);
undefined8 FUN_7ff8ee6ffb40(longlong param_1);
void FUN_7ff8ee6ffb50(longlong *param_1,longlong param_2);
void FUN_7ff8ee6ffb80(longlong param_1,undefined8 param_2);
undefined8 * FUN_7ff8ee6ffba0(undefined8 *param_1,uint param_2);
undefined8 * FUN_7ff8ee6ffbe0(undefined8 *param_1);
undefined8 * FUN_7ff8ee6fff50(undefined8 *param_1,uint param_2);
void FUN_7ff8ee6fffe0(longlong *param_1,double param_2);
void FUN_7ff8ee700260(longlong param_1);
void FUN_7ff8ee700330(longlong param_1);
void FUN_7ff8ee700340(longlong param_1,undefined4 param_2,undefined4 param_3,double param_4,double param_5,double param_6);
void FUN_7ff8ee700480(longlong param_1);
void FUN_7ff8ee700490(longlong *param_1,uint param_2,undefined8 param_3);
void FUN_7ff8ee700660(longlong param_1);
void FUN_7ff8ee700670(longlong param_1,longlong param_2,uint param_3);
double FUN_7ff8ee700780(longlong *param_1,uint param_2);
void FUN_7ff8ee701220(longlong param_1);
void FUN_7ff8ee701230(longlong param_1,char *param_2,void *param_3);
void FUN_7ff8ee701320(longlong param_1);
longlong * FUN_7ff8ee7013a0(void);
undefined8 * FUN_7ff8ee701410(undefined8 *param_1,uint param_2);
void FUN_7ff8ee701450(undefined8 *param_1);
void FUN_7ff8ee701580(longlong param_1,undefined8 param_2,char param_3);
void FUN_7ff8ee7015b0(undefined8 *param_1,longlong param_2);
void FUN_7ff8ee7019d0(longlong param_1,undefined8 param_2,undefined8 param_3,double param_4,double *param_5,double *param_6,double *param_7,undefined8 param_8,undefined8 param_9,double *param_10);
void FUN_7ff8ee701d40(longlong param_1);
undefined8 FUN_7ff8ee702850(longlong param_1);
ControlSystem * FUN_7ff8ee702e70(ControlSystem *param_1,uint param_2);
void FUN_7ff8ee702eb0(ControlSystem *param_1);
void FUN_7ff8ee702f30(longlong param_1,double param_2,int param_3);
void FUN_7ff8ee703010(longlong param_1,int param_2,int param_3);
void FUN_7ff8ee7030e0(longlong param_1,char param_2,int param_3);
void FUN_7ff8ee703140(longlong param_1,char param_2,int param_3);
void FUN_7ff8ee7031e0(longlong param_1,double param_2,int param_3);
void FUN_7ff8ee703230(longlong param_1,undefined1 param_2);
undefined8 FUN_7ff8ee703240(longlong param_1,int param_2);
undefined1 FUN_7ff8ee703260(longlong param_1);
double FUN_7ff8ee703270(longlong param_1,int param_2);
void FUN_7ff8ee703300(longlong param_1,uint param_2,char param_3);
void FUN_7ff8ee703450(longlong param_1,undefined4 param_2,undefined8 param_3);
void FUN_7ff8ee703510(longlong param_1,undefined4 param_2,double param_3);
void FUN_7ff8ee7035f0(longlong *param_1,char param_2);
void FUN_7ff8ee703600(longlong param_1,undefined4 param_2);
void FUN_7ff8ee7036c0(longlong param_1,undefined4 param_2,undefined8 param_3);
void FUN_7ff8ee703750(longlong param_1,undefined1 param_2);
void FUN_7ff8ee703760(longlong param_1,undefined1 param_2);
void FUN_7ff8ee703770(longlong *param_1,int param_2,double param_3);
void FUN_7ff8ee7040f0(longlong param_1,byte param_2,char param_3);
void FUN_7ff8ee704210(longlong param_1);
void FUN_7ff8ee7044c0(longlong param_1);
void FUN_7ff8ee7044d0(longlong param_1);
undefined8 FUN_7ff8ee7047a0(longlong param_1,undefined4 param_2);
undefined8 FUN_7ff8ee704820(longlong param_1);
double FUN_7ff8ee704fb0(longlong param_1,undefined4 param_2);
undefined8 FUN_7ff8ee705010(longlong param_1,int param_2);
void FUN_7ff8ee705030(longlong param_1);
void FUN_7ff8ee705040(longlong param_1);
void FUN_7ff8ee705050(longlong param_1);
void FUN_7ff8ee705060(longlong param_1,undefined8 param_2,byte param_3);
void FUN_7ff8ee705090(longlong param_1);
undefined8 * FUN_7ff8ee705100(undefined8 *param_1,uint param_2);
undefined4 * FUN_7ff8ee705140(undefined4 *param_1);
void FUN_7ff8ee7051c0(longlong param_1);
undefined4 * FUN_7ff8ee705220(undefined4 *param_1);
void FUN_7ff8ee705360(longlong param_1);
longlong FUN_7ff8ee7053c0(longlong param_1);
void FUN_7ff8ee705480(undefined8 *param_1);
void FUN_7ff8ee7055f0(longlong *param_1);
void FUN_7ff8ee705630(longlong *param_1,longlong param_2);
void FUN_7ff8ee7058f0(longlong param_1,double param_2);
double FUN_7ff8ee705970(longlong param_1,double param_2);
double FUN_7ff8ee7059f0(longlong param_1);
undefined4 FUN_7ff8ee705a10(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6);
double FUN_7ff8ee705ac0(longlong param_1,int param_2);
void FUN_7ff8ee705b30(longlong param_1,undefined8 param_2);
undefined8 FUN_7ff8ee705b40(longlong param_1);
void FUN_7ff8ee705b50(longlong param_1,double param_2);
undefined8 FUN_7ff8ee705c30(longlong param_1);
undefined8 * FUN_7ff8ee705ed0(undefined8 *param_1,uint param_2);
void FUN_7ff8ee705f10(undefined8 *param_1);
undefined8 FUN_7ff8ee705fc0(longlong param_1);
void FUN_7ff8ee706bd0(longlong param_1);
void FUN_7ff8ee707110(longlong param_1,longlong param_2);
void FUN_7ff8ee7074e0(longlong param_1,char param_2,char param_3);
double FUN_7ff8ee707510(longlong param_1,int param_2);
double FUN_7ff8ee707590(longlong param_1,int param_2);
double FUN_7ff8ee707610(longlong param_1,int param_2);
double FUN_7ff8ee707670(longlong param_1,int param_2);
undefined8 * FUN_7ff8ee7076e0(longlong param_1,undefined8 *param_2,int param_3);
undefined8 * FUN_7ff8ee707760(longlong param_1,undefined8 *param_2,int param_3);
double FUN_7ff8ee7077d0(longlong param_1,int param_2);
double FUN_7ff8ee707830(longlong param_1,int param_2);
double FUN_7ff8ee7078b0(longlong param_1,int param_2);
void FUN_7ff8ee707940(longlong param_1,int param_2);
void FUN_7ff8ee7079d0(longlong param_1,int param_2);
void FUN_7ff8ee707aa0(longlong *param_1);
void FUN_7ff8ee707b00(longlong *param_1);
void FUN_7ff8ee707b60(longlong param_1);
undefined8 * FUN_7ff8ee707c10(float *param_1,undefined8 *param_2,byte *param_3);
void FUN_7ff8ee707e30(longlong *param_1);
void FUN_7ff8ee707fb0(longlong *param_1);
longlong * FUN_7ff8ee708130(longlong param_1,longlong *param_2,longlong *param_3);
undefined8 * FUN_7ff8ee708300(longlong *param_1,void *param_2,undefined8 *param_3);
undefined8 * FUN_7ff8ee7084f0(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_7ff8ee7087c0(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3);
void FUN_7ff8ee708a30(void *param_1,char param_2);
TypeDescriptor * FUN_7ff8ee708a40(void);
void FUN_7ff8ee708a50(longlong param_1);
undefined8 * FUN_7ff8ee708a60(longlong param_1,undefined8 *param_2);
TypeDescriptor * FUN_7ff8ee708a80(void);
undefined8 * FUN_7ff8ee708a90(longlong param_1,undefined8 *param_2);
TypeDescriptor * FUN_7ff8ee708ab0(void);
undefined8 * FUN_7ff8ee708ac0(longlong param_1,undefined8 *param_2);
TypeDescriptor * FUN_7ff8ee708ae0(void);
undefined8 * FUN_7ff8ee708af0(longlong param_1,undefined8 *param_2);
void FUN_7ff8ee708b10(float *param_1);
void FUN_7ff8ee708bd0(longlong param_1,ulonglong param_2);
void FUN_7ff8ee708d7c(longlong param_1,uint param_2);
void FUN_7ff8ee708d90(uint *param_1,longlong *param_2);
void FUN_7ff8ee7093d0(longlong param_1,char *param_2);
longlong * FUN_7ff8ee709ba0(void);
ccMainPanel * FUN_7ff8ee709be0(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
void FUN_7ff8ee709c80(longlong *param_1);
Factory * FUN_7ff8ee709cf0(Factory *param_1,uint param_2);
ccMainPanel * FUN_7ff8ee709d30(ccMainPanel *param_1,uint param_2);
void FUN_7ff8ee709d70(void);
undefined * FUN_7ff8ee709df0(void);
void FUN_7ff8ee709e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
undefined8 FUN_7ff8ee709e60(HMODULE param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
longlong *FUN_7ff8ee709ee0(undefined8 param_1,longlong *param_2,longlong *param_3,ulonglong *param_4);
undefined1 (*) [32]FUN_7ff8ee70a120(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3);
undefined1 (*) [32]thunk_FUN_7ff8ee70a120(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3);
double __thiscall EagleFM::JetEngine::calcFuelFlow(JetEngine *this);
double __thiscall EagleFM::ControlSystem::getThrottleControl(ControlSystem *this,int param_1);
void __thiscall EagleFM::AerodyneFM::NetCrewMemberAttachDetach(AerodyneFM *this,uchar param_1,uchar param_2,bool param_3);
void __thiscall EagleFM::AerodyneFM::NetCrewMemberAttachDetach(AerodyneFM *this,uchar param_1,uchar param_2,bool param_3);
void __thiscall EagleFM::AerodyneFM::NetCrewMemberAttachDetach(AerodyneFM *this,uchar param_1,uchar param_2,bool param_3);
void __thiscall EagleFM::AerodyneFM::NetCrewMemberAttachDetach(AerodyneFM *this,uchar param_1,uchar param_2,bool param_3);
void __thiscall EagleFM::ControlSystem::setJoystickFFB(ControlSystem *this,bool param_1);
void __thiscall gui::EditBoxLine::beginClip_(EditBoxLine *this);
void __thiscall gui::EditBoxLine::beginClip_(EditBoxLine *this);
void __thiscall gui::EditBoxLine::beginClip_(EditBoxLine *this);
char * __thiscall cockpit::avDevice::l_metatable_name(avDevice *this);
bool __thiscall cockpit::avDevice::NetCrewMemberUpdateStream(avDevice *this,uchar param_1,uchar param_2,Stream *param_3);
void __thiscall cockpit::avDate::~avDate(avDate *this);
bool __thiscall cockpit::avDevice::checkCallbackClickable(avDevice *this,int param_1,float *param_2);
bool __thiscall cockpit::avDevice::checkCallbackKeyboard(avDevice *this,int param_1,float *param_2);
void __thiscall cockpit::avDate::~avDate(avDate *this);
bool __thiscall cockpit::avBreakable::set_failure(avBreakable *this,basic_string<char> *param_1);
void __thiscall cockpit::avBreakable::check_damage(avBreakable *this,uint param_1,double param_2,avDamageData *param_3);
void __thiscall cockpit::avBreakable::repair(avBreakable *this);
bool __thiscall cockpit::avBreakable::getflag_ready(avBreakable *this);
bool __thiscall cockpit::avBasicElectric::getElecPower(avBasicElectric *this);
void __thiscall cockpit::avBreakable::setflag_ready(avBreakable *this,bool param_1);
void __thiscall cockpit::avBasicElectric::setElecPower(avBasicElectric *this,bool param_1);
bool __thiscall cockpit::avDevice::NetCrewMemberUpdateStream(avDevice *this,uchar param_1,uchar param_2,Stream *param_3);
bool __thiscall cockpit::avNavigation_MAC::CheckNavMode(avNavigation_MAC *this);
void __thiscall cockpit::avTVSensor::on_target_disappear(avTVSensor *this,bool param_1);
void __thiscall cockpit::avDate::~avDate(avDate *this);
void __thiscall cockpit::avTVSensor::update_gyro_base_point(avTVSensor *this,double param_1);
void __thiscall cockpit::avTVSensor::update_gyro_space_base_point(avTVSensor *this);
double __thiscall cockpit::avTVSensor::roll_stabilize(avTVSensor *this,wPosition3<double> *param_1);
void __thiscall cockpit::avTVSensor::clear_AC_mode_factors(avTVSensor *this);
void __thiscall cockpit::avTVSensor::inertial_system_computed_position(avTVSensor *this);
bool __thiscall cockpit::avTVSensor::use_gyro_base(avTVSensor *this);
double __thiscall cockpit::avTVSensor::get_distance_to_terrain(avTVSensor *this);
void __thiscall cockpit::avTVSensor::set_gyro_moving(avTVSensor *this);
bool __thiscall cockpit::avDevice::NetCrewMemberUpdateStream(avDevice *this,uchar param_1,uchar param_2,Stream *param_3);
bool __thiscall cockpit::avTVSensor::on_absolute_axis(avTVSensor *this,avMotor *param_1,float param_2,float param_3,double param_4);
void __thiscall cockpit::avTVSensor::calculate_target_angles(avTVSensor *this,Vec3d *param_1);
void __thiscall cockpit::avTVSensor::on_power_off(avTVSensor *this);
void __thiscall cockpit::avTVSensor::on_power_off(avTVSensor *this);
void __thiscall cockpit::avTVSensor::clear(avTVSensor *this);
void __thiscall cockpit::avTVSensor::slave_error(avTVSensor *this,wPosition3<double> *param_1,Vec3d *param_2);
void __thiscall cockpit::avTVSensor::reset(avTVSensor *this);
void __thiscall cockpit::avTVSensor::stabilizeInSpace(avTVSensor *this);
void __thiscall cockpit::avTVSensor::get_SPI(avTVSensor *this);
bool __thiscall cockpit::avTVSensor::is_ready_to_fire(avTVSensor *this);
void __thiscall cockpit::avTVSensor::uncage(avTVSensor *this);
bool __thiscall cockpit::avTVSensor::search_handler(avTVSensor *this,ISceneObject *param_1);
bool __thiscall cockpit::avTVSensor::test_and_lockon(avTVSensor *this,uint param_1);
void __thiscall cockpit::avTVSensor::set_external_designation(avTVSensor *this,bool param_1,bool param_2);
bool __thiscall cockpit::avTVSensor::is_LockOn(avTVSensor *this);
void __thiscall cockpit::avTVSensor::search(avTVSensor *this);
void __thiscall cockpit::avTVSensor::on_update_position(avTVSensor *this,double param_1);
void __thiscall cockpit::avTVSensor::interpolate_angles(avTVSensor *this,wPosition3<double> *param_1,double param_2);
void __thiscall cockpit::avTVSensor::respat_angles(avTVSensor *this,double param_1,double param_2);
void __thiscall cockpit::avTVSensor::getPolarPosition(avTVSensor *this);
bool __thiscall cockpit::avBasicElectric::getElecPower(avBasicElectric *this);
void __thiscall cockpit::avBasicElectric::switchElecOnOff(avBasicElectric *this);
void __thiscall cockpit::avPlatform::restart(avPlatform *this);
void __thiscall cockpit::avPlatform::set_platform(avPlatform *this,avPlatform *param_1);
double __thiscall cockpit::avBasicSensor_SearchTimer::GetTimeout(avBasicSensor_SearchTimer *this);
double __thiscall cockpit::avPlatform::azimuth(avPlatform *this);
bool __thiscall cockpit::eqLitening_TGP::set_damage(eqLitening_TGP *this,uint param_1,bool param_2);
void __thiscall cockpit::eqLitening_TGP::setElecPower(eqLitening_TGP *this,bool param_1);
bool __thiscall cockpit::avNavigation_MAC::CheckNavMode(avNavigation_MAC *this);
void __thiscall cockpit::eqLitening_TGP::get_tracked_point(eqLitening_TGP *this);
bool __thiscall cockpit::eqLitening_TGP::target_can_be_detected(eqLitening_TGP *this,avTrackData *param_1);
double __thiscall cockpit::eqLitening_TGP::get_delta_height(eqLitening_TGP *this);
double __thiscall cockpit::eqLitening_TGP::get_search_angle(eqLitening_TGP *this);
double __thiscall cockpit::eqLitening_TGP::default_search_distance(eqLitening_TGP *this);
void __thiscall cockpit::eqLitening_TGP::prolongate(eqLitening_TGP *this,double param_1);
void __thiscall cockpit::eqLitening_TGP::scan(eqLitening_TGP *this,double param_1);
void __thiscall cockpit::eqLitening_TGP::scan_stop(eqLitening_TGP *this);
void __thiscall cockpit::eqLitening_TGP::tracking(eqLitening_TGP *this,double param_1);
void __thiscall cockpit::eqLitening_TGP::set_mode(eqLitening_TGP *this,uchar param_1);
void __thiscall cockpit::eqLitening_TGP::start_tracking(eqLitening_TGP *this);
double __thiscall cockpit::eqLitening_TGP::get_velocity_by_axis_value(eqLitening_TGP *this,float param_1,float param_2);
uchar __thiscall cockpit::eqLitening_TGP::check_size(eqLitening_TGP *this,sensor_frame *param_1,sensor_frame *param_2);
double __thiscall cockpit::eqLitening_TGP::get_slew_velocity(eqLitening_TGP *this);
double __thiscall cockpit::eqLitening_TGP::get_slew_acceleration(eqLitening_TGP *this,double param_1);
void __thiscall cockpit::eqLitening_TGP::update_frame(eqLitening_TGP *this);
void __thiscall cockpit::eqLitening_TGP::initZoom(eqLitening_TGP *this);
void __thiscall cockpit::eqLitening_TGP::slave_to_point(eqLitening_TGP *this,Vec3d *param_1);
void __thiscall cockpit::eqLitening_TGP::on_axis_stop(eqLitening_TGP *this);
void __thiscall cockpit::eqLitening_TGP::slew_stop(eqLitening_TGP *this);
void __thiscall cockpit::eqLitening_TGP::slew_down(eqLitening_TGP *this,double param_1);
void __thiscall cockpit::eqLitening_TGP::slew_up(eqLitening_TGP *this,double param_1);
void __thiscall cockpit::eqLitening_TGP::slew_right(eqLitening_TGP *this,double param_1);
void __thiscall cockpit::eqLitening_TGP::slew_left(eqLitening_TGP *this,double param_1);
void __thiscall cockpit::eqLitening_TGP::zoom_out(eqLitening_TGP *this);
void __thiscall cockpit::eqLitening_TGP::zoom_in(eqLitening_TGP *this);
void __thiscall cockpit::eqLitening_TGP::stabilizeOnGround(eqLitening_TGP *this,bool param_1);
bool __thiscall cockpit::eqLitening_TGP::on_TV_SENSOR_move_vertical_abs(eqLitening_TGP *this,float param_1,float param_2,double param_3);
bool __thiscall cockpit::eqLitening_TGP::on_TV_SENSOR_move_horizontal_abs(eqLitening_TGP *this,float param_1,float param_2,double param_3);
void __thiscall cockpit::eqLitening_TGP::cage(eqLitening_TGP *this);
bool __thiscall cockpit::eqLitening_TGP::is_TV_Available(eqLitening_TGP *this);
void __thiscall cockpit::eqLitening_TGP::initialize(eqLitening_TGP *this);
void __thiscall cockpit::eqLitening_TGP::update_angles(eqLitening_TGP *this,double param_1);
void __thiscall cockpit::eqLitening_TGP::set_carrier(eqLitening_TGP *this,MovingObject *param_1);
void __thiscall cockpit::eqLitening_TGP::setPlatformInitialLocalPosition(eqLitening_TGP *this,wPosition3<double> *param_1);
void __thiscall cockpit::eqLitening_TGP::fill_camera(eqLitening_TGP *this,Camera *param_1);
void __thiscall cockpit::ccIndicationTemplateBuffer::on_change_mode(ccIndicationTemplateBuffer *this,ccIndicator *param_1,lua_State *param_2);
void __thiscall cockpit::avDevice::l_register_functions(avDevice *this,lua_State *param_1,int param_2);
void __thiscall cockpit::avDevice::register_in_script(avDevice *this,lua_State *param_1);
bool __thiscall cockpit::avNavigation_MAC::CheckNavMode(avNavigation_MAC *this);
void __thiscall cockpit::avDate::~avDate(avDate *this);
void __thiscall cockpit::avDate::~avDate(avDate *this);
void __thiscall cockpit::avDate::~avDate(avDate *this);
void __thiscall cockpit::avDevice::release(avDevice *this);
void __thiscall cockpit::avDevice::initialize(avDevice *this,uchar param_1,basic_string<char> *param_2,basic_string<char> *param_3);
void __thiscall cockpit::ccMapObjectsBuffer::initialize(ccMapObjectsBuffer *this,ccIndicator *param_1,lua_State *param_2,char *param_3);
void __thiscall cockpit::ccArcade_template_buffer::draw(ccArcade_template_buffer *this,ccIndicationRenderParser *param_1,uchar param_2);
void __thiscall cockpit::ccArcade_template_buffer::rebuild(ccArcade_template_buffer *this,Element *param_1);
void __thiscall cockpit::ccIndicator::l_register_functions(ccIndicator *this,lua_State *param_1,int param_2);
void __thiscall cockpit::avDate::~avDate(avDate *this);
void __thiscall cockpit::ccIndicator::initPages(ccIndicator *this);
void __thiscall cockpit::ccIndicator::check_page(void);
void __thiscall cockpit::ccIndicator::RegisterInScript(ccIndicator *this,lua_State *param_1);
wPosition3<float> * __thiscall cockpit::ccIndicator::get_initpos(ccIndicator *this);
wPosition3<float> * __thiscall cockpit::ccIndicator::get_position(ccIndicator *this,bool param_1);
Element * __thiscall cockpit::ccIndicator::get_element_on_current_page(ccIndicator *this,char *param_1);
uint __thiscall cockpit::eqR60::getStatus(eqR60 *this);
void Ordinal_3884(void);
void Ordinal_3884(void);
void Ordinal_3883(void);
void Ordinal_3883(void);
int __thiscall cockpit::ccIndicator::getType(ccIndicator *this);
void __thiscall cockpit::avDate::~avDate(avDate *this);
bool __thiscall cockpit::ccIndicator::get_render_target_always(ccIndicator *this);
void __thiscall cockpit::avDate::~avDate(avDate *this);
TVScreenCondition __thiscall cockpit::ccIndicator::get_screen_condition(ccIndicator *this);
void __thiscall cockpit::ccIndicator::get_camera_point(ccIndicator *this);
Camera * __thiscall cockpit::ccIndicator::get_camera(ccIndicator *this);
void __thiscall cockpit::ccIndicator::set_geometry(ccIndicator *this,indicator_geometry *param_1);
void __thiscall cockpit::ccIndicator::remove_purpose(ccIndicator *this,int param_1);
void __thiscall cockpit::ccIndicator::pop_purpose(ccIndicator *this);
void __thiscall cockpit::ccIndicator::push_purpose(ccIndicator *this,int param_1);
void __thiscall cockpit::avDate::~avDate(avDate *this);
void __thiscall cockpit::ccIndicator::update(ccIndicator *this);
void __thiscall cockpit::ccIndicator::update(ccIndicator *this,uchar param_1);
bool __thiscall cockpit::ccIndicator::is_draw_screenspace(ccIndicator *this);
void __thiscall cockpit::ccIndicator::draw_to_viewport(ccIndicator *this,indicator_viewport *param_1);
void __thiscall cockpit::ccIndicator::draw_screenspace(ccIndicator *this,bool param_1);
void __thiscall cockpit::ccIndicator::draw(ccIndicator *this);
void __thiscall cockpit::ccIndicator::draw(ccIndicator *this,uchar param_1);
void __thiscall cockpit::avDate::~avDate(avDate *this);
void __thiscall cockpit::avDate::~avDate(avDate *this);
void __thiscall cockpit::avDate::~avDate(avDate *this);
void __thiscall cockpit::ccDrawable::start(ccDrawable *this,uint param_1);
void __thiscall cockpit::ccDrawable::draw_to_render_target(ccDrawable *this);
bool __thiscall cockpit::SimpleOctTreeLoad::check_sphere(SimpleOctTreeLoad *this,Vec3f *param_1,float *param_2);
bool __thiscall cockpit::SimpleOctTreeLoad::check_segment(SimpleOctTreeLoad *this,Vec3f *param_1,Vec3f *param_2);
void __cdecl __security_check_cookie(uintptr_t _StackCookie);
void FUN_7ff8ee70a780(void);
void FUN_7ff8ee70a790(void);
void __cdecl free(void *_Memory);
undefined8 * FUN_7ff8ee70a7a4(undefined8 *param_1,ulonglong param_2);
void FUN_7ff8ee70a7d0(undefined4 *param_1);
void _Init_thread_footer(int *param_1);
void FUN_7ff8ee70a878(int *param_1);
void FUN_7ff8ee70a8f4(size_t param_1);
ulonglong __scrt_acquire_startup_lock(void);
undefined8 __scrt_dllmain_after_initialize_c(void);
bool FUN_7ff8ee70a9a0(void);
undefined1 FUN_7ff8ee70a9b8(void);
undefined1 FUN_7ff8ee70a9e0(void);
void __scrt_dllmain_exception_filter(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5,undefined8 param_6);
void __scrt_dllmain_uninitialize_c(void);
void FUN_7ff8ee70aa88(void);
longlong FUN_7ff8ee70aa9c(int param_1);
undefined8 FUN_7ff8ee70aad8(uint param_1);
ulonglong FUN_7ff8ee70ab64(longlong param_1);
void __scrt_release_startup_lock(char param_1);
undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2);
_onexit_t __cdecl _onexit(_onexit_t _Func);
int __cdecl atexit(_func_5014 *param_1);
void __cdecl free(void *_Memory);
void thunk_FUN_7ff8ee70a8f4(size_t param_1);
void __cdecl free(void *_Memory);
ulonglong FUN_7ff8ee70acb8(undefined8 param_1,int param_2,longlong param_3);
undefined8 FUN_7ff8ee70ad08(undefined8 param_1,undefined8 param_2);
undefined1 FUN_7ff8ee70ae20(undefined8 param_1);
int FUN_7ff8ee70aea4(HMODULE param_1,uint param_2,longlong param_3,undefined8 param_4);
void entry(HMODULE param_1,uint param_2,longlong param_3,undefined8 param_4);
undefined8 FUN_7ff8ee70b00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4);
ulonglong FUN_7ff8ee70b02c(undefined8 param_1,longlong param_2);
undefined8 FUN_7ff8ee70b08c(void);
void __raise_securityfailure(_EXCEPTION_POINTERS *param_1);
void FUN_7ff8ee70b358(void);
void FUN_7ff8ee70b42c(PCONTEXT param_1);
undefined8 * FUN_7ff8ee70b4a0(undefined8 *param_1);
void FUN_7ff8ee70b4c4(void);
undefined8 FUN_7ff8ee70b4e4(void);
bool __scrt_is_ucrt_dll_in_use(void);
void FUN_7ff8ee70b4f8(void);
void FUN_7ff8ee70b504(undefined4 param_1);
void FUN_7ff8ee70b650(void);
undefined * FUN_7ff8ee70b700(void);
void FUN_7ff8ee70b708(void);
undefined * FUN_7ff8ee70b724(void);
void FUN_7ff8ee70b72c(void);
void FUN_7ff8ee70b768(void);
void __CxxFrameHandler4(void);
void _purecall(void);
int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size);
void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size);
void * __cdecl memset(void *_Dst,int _Val,size_t _Size);
void __std_type_info_destroy_list(void);
void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo);
void __cdecl free(void *_Memory);
void * __cdecl malloc(size_t _Size);
int __cdecl _callnewh(size_t _Size);
void _seh_filter_dll(void);
void _configure_narrow_argv(void);
void _initialize_narrow_environment(void);
void _initialize_onexit_table(void);
void _register_onexit_function(void);
void _execute_onexit_table(void);
void _crt_atexit(void);
void __cdecl _cexit(void);
void _initterm(void);
void _initterm_e(void);
undefined1 FUN_7ff8ee70b834(void);
void FUN_7ff8ee70b838(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4);
void __chkstk(void);
void __RTDynamicCast(void);
void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size);
float __cdecl atan2f(float _Y,float _X);
float __cdecl ceilf(float _X);
double __cdecl cos(double _X);
float __cdecl cosf(float _X);
double __cdecl floor(double _X);
double __cdecl fmod(double _X,double _Y);
double __cdecl sin(double _X);
float __cdecl sinf(float _X);
double __cdecl sqrt(double _X);
float __cdecl sqrtf(float _X);
void _guard_dispatch_icall(void);
void _guard_dispatch_icall(void);
void FUN_7ff8ee70ba00(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70bb64(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70bbd0(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70bc10(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70bd74(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70bda0(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70bdbd(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70be10(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70be3c(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70be71(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70bf60(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70bf80(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c040(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c090(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c0f0(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c150(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c1d0(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c210(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c240(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c2b0(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c2d0(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c320(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c461(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c53c(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c65a(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c6a0(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c6c0(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c6dd(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c6fa(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c717(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c734(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c751(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c76e(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c790(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c7f0(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c834(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c8c0(undefined8 param_1,longlong param_2);
bool FUN_7ff8ee70c8f8(undefined8 *param_1);
void FUN_7ff8ee70c910(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c927(undefined8 param_1,longlong param_2);
void FUN_7ff8ee70c940(void);
void FUN_7ff8ee70c954(undefined8 *param_1,longlong param_2);
void FUN_7ff8ee70c990(void);
void FUN_7ff8ee70c9a0(void);
void FUN_7ff8ee70c9b0(void);
void FUN_7ff8ee70ca30(void);
void FUN_7ff8ee70ca94(void);

