#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/port_message_t.hpp"
#include "message_attributes_t.hpp"
#include "completion_list_header_t.hpp"

#include "magic/api.start.hpp"
namespace alpc
{
    // [AlpcMetaProviderContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x81d8, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) meta_provider_context;
    
    // [AlpcMetaProviderMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x1d420, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) meta_provider_map;
    
    // [AlpcConnectionCleanupProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) connection_cleanup_procedure;
    
    // [AlpcCreateSecurityContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8bf260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96c830, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bda10, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) create_security_context;
    
    // [AlpcHandleDataCleanupProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) handle_data_cleanup_procedure;
    
    // [AlpcMessageCleanupProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6feaa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a6270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64ba80, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) message_cleanup_procedure;
    
    // [AlpcRegionCleanupProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) region_cleanup_procedure;
    
    // [AlpcReserveCleanupProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) reserve_cleanup_procedure;
    
    // [AlpcSectionCleanupProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) section_cleanup_procedure;
    
    // [AlpcSecurityCleanupProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) security_cleanup_procedure;
    
    // [AlpcViewCleanupProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) view_cleanup_procedure;
    
    // [AlpcAddHandleTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x460978, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ff6a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f3ffc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6427f8, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) add_handle_table_entry;
    
    // [AlpcConnectionDeleteProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) connection_delete_procedure;
    
    // [AlpcConnectionDestroyProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47ed1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x643950, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7be040, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b8010, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) connection_destroy_procedure;
    
    // [AlpcConnectionType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x258098, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2c88, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2650, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1518, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) connection_type;
    
    // [AlpcConnectionTypeCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3422c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a858, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40258, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a7d8, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) connection_type_counters;
    
    // [AlpcDeleteBlobByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x460190, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x699c7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f5294, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b9ffc, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) delete_blob_by_handle;
    
    // [AlpcGetHeaderSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1065d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x21af30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fce70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35cc70, 0x1fe000 bytes
    //
    _n7(sdk::function<uint32_t(uint32_t)>*) get_header_size;
    
    // [AlpcGetMessageAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106474, 0x32828 bytes
    // ntoskrnl.exe .text:0x21ae90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fcdd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35cbd0, 0x1fe000 bytes
    //
    _n8(sdk::function<void*(struct alpc::message_attributes_t*, uint32_t)>*) get_message_attribute;
    
    // [AlpcHandleDataDeleteProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) handle_data_delete_procedure;
    
    // [AlpcHandleDataDestroyProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4892e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62d960, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c5f00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68a3b0, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) handle_data_destroy_procedure;
    
    // [AlpcHandleDataType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x258328, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x20b0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2aa0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2500, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) handle_data_type;
    
    // [AlpcHandleDataTypeCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3422f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a7d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc401a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a770, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) handle_data_type_counters;
    
    // [AlpcInitializeHandleTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45ce60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fc794, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ee7dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x649774, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) initialize_handle_table;
    
    // [AlpcInitializeMessageAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106580, 0x32828 bytes
    // ntoskrnl.exe .text:0x21aed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fce10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35cc10, 0x1fe000 bytes
    //
    _o4(sdk::function<int32_t(uint32_t, struct alpc::message_attributes_t*, uint32_t, uint32_t*)>*) initialize_message_attribute;
    
    // [AlpcMessageDeleteProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) message_delete_procedure;
    
    // [AlpcMessageDestroyProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c16d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x646270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a8e40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b9d90, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) message_destroy_procedure;
    
    // [AlpcMessageTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab4c0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7f0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1de50, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7f0, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) message_table;
    
    // [AlpcMessageType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2580f8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x5b60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2618, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x5b50, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) message_type;
    
    // [AlpcMessageTypeCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3422d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a868, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40268, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a7e8, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) message_type_counters;
    
    // [AlpcPortObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2e0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb540, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db48, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb540, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) port_object_type;
    
    // [AlpcReferenceBlobByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x460780, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b9c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f3c0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x610290, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) reference_blob_by_handle;
    
    // [AlpcRegionDeleteProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) region_delete_procedure;
    
    // [AlpcRegionDestroyProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x488884, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65c110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c5170, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d0290, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) region_destroy_procedure;
    
    // [AlpcRegionType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2580c8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2cc0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2730, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x14e0, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) region_type;
    
    // [AlpcRegionTypeCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3422e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a848, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40250, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a7c8, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) region_type_counters;
    
    // [AlpcRegisterLogRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65af7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c08ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96df50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bf05c, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) register_log_routine;
    
    // [AlpcReserveDeleteProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) reserve_delete_procedure;
    
    // [AlpcReserveDestroyProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49d150, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x674320, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e07c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b9e50, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) reserve_destroy_procedure;
    
    // [AlpcReserveType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2582f8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1ff8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5770, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x10d8, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) reserve_type;
    
    // [AlpcReserveTypeCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3422d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a860, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40260, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a7e0, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) reserve_type_counters;
    
    // [AlpcSectionDeleteProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x489964, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6627b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f6010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b9ed0, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) section_delete_procedure;
    
    // [AlpcSectionDestroyProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48d05c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x665380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c9bc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d85d0, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) section_destroy_procedure;
    
    // [AlpcSectionType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x258128, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2ba0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x2688, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dc8, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) section_type;
    
    // [AlpcSectionTypeCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3422b8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a840, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40240, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a7c0, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) section_type_counters;
    
    // [AlpcSecurityDeleteProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) security_delete_procedure;
    
    // [AlpcSecurityDestroyProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x460254, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6992a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f2d90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b9f40, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) security_destroy_procedure;
    
    // [AlpcSecurityType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x258158, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2bd8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x26c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1450, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) security_type;
    
    // [AlpcSecurityTypeCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3422c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a8c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40270, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a840, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) security_type_counters;
    
    // [AlpcUnregisterLogRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b0a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c099c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e044, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bf14c, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) unregister_log_routine;
    
    // [AlpcViewDeleteProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) view_delete_procedure;
    
    // [AlpcViewDestroyProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x460dd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6993b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f4b30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x635660, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) view_destroy_procedure;
    
    // [AlpcViewType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x258188, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2c10, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x26f8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1488, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) view_type;
    
    // [AlpcViewTypeCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3422e8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a850, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40248, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a7d0, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) view_type_counters;
    
    // [AlpcAdjustCompletionListConcurrencyCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x55510, 0x67960 bytes
    // ntdll.dll .text:0xe06d0, 0x6fc38 bytes
    // ntdll.dll .text:0xeafb0, 0x74648 bytes
    // ntdll.dll .text:0xe0640, 0x6fc38 bytes
    //
    _r4(sdk::function<int32_t(void*, uint32_t)>*) adjust_completion_list_concurrency_count;
    
    // [AlpcFreeCompletionListMessage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6fee0, 0x67960 bytes
    // ntdll.dll .text:0x6f5b0, 0x6fc38 bytes
    // ntdll.dll .text:0x7e2c0, 0x74648 bytes
    // ntdll.dll .text:0x6f750, 0x6fc38 bytes
    //
    _r5(sdk::function<void(void*, struct nt::port_message_t*)>*) free_completion_list_message;
    
    // [AlpcGetCompletionListLastMessageInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdcdf0, 0x67960 bytes
    // ntdll.dll .text:0xe0700, 0x6fc38 bytes
    // ntdll.dll .text:0xeafe0, 0x74648 bytes
    // ntdll.dll .text:0xe0670, 0x6fc38 bytes
    //
    _r6(sdk::function<void(void*, uint32_t*, uint32_t*)>*) get_completion_list_last_message_information;
    
    // [AlpcGetCompletionListMessageAttributes]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdce10, 0x67960 bytes
    // ntdll.dll .text:0xe0720, 0x6fc38 bytes
    // ntdll.dll .text:0xeb000, 0x74648 bytes
    // ntdll.dll .text:0xe0690, 0x6fc38 bytes
    //
    _r7(sdk::function<struct alpc::message_attributes_t*(void*, struct nt::port_message_t*)>*) get_completion_list_message_attributes;
    
    // [AlpcGetMessageFromCompletionList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x31010, 0x67960 bytes
    // ntdll.dll .text:0x6ed90, 0x6fc38 bytes
    // ntdll.dll .text:0x7d610, 0x74648 bytes
    // ntdll.dll .text:0x6ef30, 0x6fc38 bytes
    //
    _r8(sdk::function<struct nt::port_message_t*(void*, struct alpc::message_attributes_t**)>*) get_message_from_completion_list;
    
    // [AlpcGetOutstandingCompletionListMessageCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89dc0, 0x67960 bytes
    // ntdll.dll .text:0x84ca0, 0x6fc38 bytes
    // ntdll.dll .text:0x89090, 0x74648 bytes
    // ntdll.dll .text:0x84e40, 0x6fc38 bytes
    //
    _r9(sdk::function<uint32_t(void*)>*) get_outstanding_completion_list_message_count;
    
    // [AlpcMaxAllowedMessageLength]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x87990, 0x67960 bytes
    // ntdll.dll .text:0x83ac0, 0x6fc38 bytes
    // ntdll.dll .text:0x87ba0, 0x74648 bytes
    // ntdll.dll .text:0x83c60, 0x6fc38 bytes
    //
    _s0(sdk::function<uint32_t()>*) max_allowed_message_length;
    
    // [AlpcRegisterCompletionList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x88a10, 0x67960 bytes
    // ntdll.dll .text:0x84b20, 0x6fc38 bytes
    // ntdll.dll .text:0x89010, 0x74648 bytes
    // ntdll.dll .text:0x84cc0, 0x6fc38 bytes
    //
    _s1(sdk::function<int32_t(void*, struct alpc::completion_list_header_t*, uint32_t, uint32_t, uint32_t)>*) register_completion_list;
    
    // [AlpcRegisterCompletionListWorkerThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x733c0, 0x67960 bytes
    // ntdll.dll .text:0x747f0, 0x6fc38 bytes
    // ntdll.dll .text:0x809c0, 0x74648 bytes
    // ntdll.dll .text:0x74990, 0x6fc38 bytes
    //
    _s2(sdk::function<uint8_t(void*)>*) register_completion_list_worker_thread;
    
    // [AlpcRundownCompletionList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89d60, 0x67960 bytes
    // ntdll.dll .text:0x84c60, 0x6fc38 bytes
    // ntdll.dll .text:0x89120, 0x74648 bytes
    // ntdll.dll .text:0x84e00, 0x6fc38 bytes
    //
    _s3(sdk::function<int32_t(void*)>*) rundown_completion_list;
    
    // [AlpcUnregisterCompletionList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89d80, 0x67960 bytes
    // ntdll.dll .text:0x84c80, 0x6fc38 bytes
    // ntdll.dll .text:0x89100, 0x74648 bytes
    // ntdll.dll .text:0x84e20, 0x6fc38 bytes
    //
    _s4(sdk::function<int32_t(void*)>*) unregister_completion_list;
    
    // [AlpcUnregisterCompletionListWorkerThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x73360, 0x67960 bytes
    // ntdll.dll .text:0x74790, 0x6fc38 bytes
    // ntdll.dll .text:0x805d0, 0x74648 bytes
    // ntdll.dll .text:0x74930, 0x6fc38 bytes
    //
    _s5(sdk::function<uint8_t(void*)>*) unregister_completion_list_worker_thread;
};
#include "magic/api.end.hpp"
