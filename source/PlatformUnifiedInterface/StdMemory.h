#ifndef UNIFIED_INTERFACE_STD_MEMORY_H
#define UNIFIED_INTERFACE_STD_MEMORY_H

#include "common/headers/common_header.h"

enum MemoryPermission { kNoAccess, kRead, kReadWrite, kReadWriteExecute, kReadExecute };

typedef enum _MemoryOperationError {
  kMemoryOperationSuccess,
  kMemoryOperationError,
  kNotSupportAllocateExecutableMemory,
  kNotEnough,
  kNone
} MemoryOperationError;

typedef struct _MemoryRange {
  void *address;
  size_t length;
} MemoryRange;

typedef struct _MemoryRegion {
  void *address;
  size_t length;
  MemoryPermission permission;
} MemoryRegion;

typedef MemoryRegion MemoryPage;

#endif
