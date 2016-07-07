/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_system_memory_internals.h"

static const char* CMockString_base_address = "base_address";
static const char* CMockString_dest = "dest";
static const char* CMockString_src = "src";
static const char* CMockString_system_init = "system_init";
static const char* CMockString_system_read = "system_read";
static const char* CMockString_system_write = "system_write";
static const char* CMockString_type_size = "type_size";
static const char* CMockString_value = "value";

typedef struct _CMOCK_system_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  void* ReturnVal;
  void* Expected_base_address;
  uint32_t Expected_type_size;

} CMOCK_system_init_CALL_INSTANCE;

typedef struct _CMOCK_system_write_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  S_DATA* Expected_dest;
  S_DATA Expected_value;

} CMOCK_system_write_CALL_INSTANCE;

typedef struct _CMOCK_system_read_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  S_DATA ReturnVal;
  S_DATA* Expected_src;

} CMOCK_system_read_CALL_INSTANCE;

static struct Mocksystem_memory_internalsInstance
{
  CMOCK_MEM_INDEX_TYPE system_init_CallInstance;
  CMOCK_MEM_INDEX_TYPE system_write_CallInstance;
  CMOCK_MEM_INDEX_TYPE system_read_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mocksystem_memory_internals_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_system_init);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.system_init_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_system_write);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.system_write_CallInstance, cmock_line, CMockStringCalledLess);
  UNITY_SET_DETAIL(CMockString_system_read);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.system_read_CallInstance, cmock_line, CMockStringCalledLess);
}

void Mocksystem_memory_internals_Init(void)
{
  Mocksystem_memory_internals_Destroy();
}

void Mocksystem_memory_internals_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

void* system_init(void* base_address, uint32_t type_size)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_system_init);
  CMOCK_system_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_system_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.system_init_CallInstance);
  Mock.system_init_CallInstance = CMock_Guts_MemNext(Mock.system_init_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_system_init,CMockString_base_address);
    if (cmock_call_instance->Expected_base_address == NULL)
      { UNITY_TEST_ASSERT_NULL(base_address, cmock_line, CMockStringExpNULL); }
    else
      {
          // Autogenerated mock tests equality of data.
          // We are using specific HW addresses, just test addresses.
          UNITY_TEST_ASSERT_EQUAL_HEX32(
            cmock_call_instance->Expected_base_address,
            base_address,
            cmock_line,
            CMockStringMismatch);
      }
  }
  {
    UNITY_SET_DETAILS(CMockString_system_init,CMockString_type_size);
    UNITY_TEST_ASSERT_EQUAL_HEX32(cmock_call_instance->Expected_type_size, type_size, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_system_init(CMOCK_system_init_CALL_INSTANCE* cmock_call_instance, void* base_address, uint32_t type_size)
{
  cmock_call_instance->Expected_base_address = base_address;
  cmock_call_instance->Expected_type_size = type_size;
}

void system_init_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, void* base_address, uint32_t type_size, void* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_system_init_CALL_INSTANCE));
  CMOCK_system_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_system_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.system_init_CallInstance = CMock_Guts_MemChain(Mock.system_init_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_system_init(cmock_call_instance, base_address, type_size);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void system_write(S_DATA* dest, S_DATA value)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_system_write);
  CMOCK_system_write_CALL_INSTANCE* cmock_call_instance = (CMOCK_system_write_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.system_write_CallInstance);
  Mock.system_write_CallInstance = CMock_Guts_MemNext(Mock.system_write_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_system_write,CMockString_dest);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_dest), (void*)(dest), sizeof(S_DATA), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_system_write,CMockString_value);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_value), (void*)(&value), sizeof(S_DATA), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_system_write(CMOCK_system_write_CALL_INSTANCE* cmock_call_instance, S_DATA* dest, S_DATA value)
{
  cmock_call_instance->Expected_dest = dest;
  memcpy(&cmock_call_instance->Expected_value, &value, sizeof(S_DATA));
}

void system_write_CMockExpect(UNITY_LINE_TYPE cmock_line, S_DATA* dest, S_DATA value)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_system_write_CALL_INSTANCE));
  CMOCK_system_write_CALL_INSTANCE* cmock_call_instance = (CMOCK_system_write_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.system_write_CallInstance = CMock_Guts_MemChain(Mock.system_write_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_system_write(cmock_call_instance, dest, value);
  UNITY_CLR_DETAILS();
}

S_DATA system_read(S_DATA* src)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_system_read);
  CMOCK_system_read_CALL_INSTANCE* cmock_call_instance = (CMOCK_system_read_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.system_read_CallInstance);
  Mock.system_read_CallInstance = CMock_Guts_MemNext(Mock.system_read_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_system_read,CMockString_src);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_src), (void*)(src), sizeof(S_DATA), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_system_read(CMOCK_system_read_CALL_INSTANCE* cmock_call_instance, S_DATA* src)
{
  cmock_call_instance->Expected_src = src;
}

void system_read_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, S_DATA* src, S_DATA cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_system_read_CALL_INSTANCE));
  CMOCK_system_read_CALL_INSTANCE* cmock_call_instance = (CMOCK_system_read_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.system_read_CallInstance = CMock_Guts_MemChain(Mock.system_read_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_system_read(cmock_call_instance, src);
  memcpy(&cmock_call_instance->ReturnVal, &cmock_to_return, sizeof(S_DATA));
  UNITY_CLR_DETAILS();
}
