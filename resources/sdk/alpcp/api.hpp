#pragma once
#include <sdkgen/support_library.hpp>
#include "../alpc/port_t.hpp"
#include "../nt/eprocess_t.hpp"
#include "../nt/kalpc_view_t.hpp"
#include "../nt/port_message_t.hpp"
#include "../nt/kalpc_message_t.hpp"
#include "../alpc/dispatch_context_t.hpp"
#include "../alpc/message_attributes_t.hpp"

#include "magic/api.start.hpp"
namespace alpcp
{
    // [AlpcpClearOwnerPortMessageUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4a0858, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) clear_owner_port_message_unsafe;
    
    // [AlpcpCopyRequestData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x659ea0, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) copy_request_data;
    
    // [AlpcpDereferencePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x6c2050, 0x1fd000 bytes
    //
    _m2(sdk::function<void(struct alpc::port_t*)>*) dereference_port;
    
    // [AlpcpDereferenceSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x96d3e8, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) dereference_section;
    
    // [AlpcpGetAvailableAttributesSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4c3ac0, 0x32828 bytes
    //
    _m4(sdk::unknown_ptr) get_available_attributes_set;
    
    // [AlpcpGetDataFromMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x480908, 0x32828 bytes
    //
    _m5(sdk::unknown_ptr) get_data_from_message;
    
    // [AlpcpGetMessageAttributeOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4813ac, 0x32828 bytes
    //
    _m6(sdk::unknown_ptr) get_message_attribute_offset;
    
    // [AlpcpGetMessageAttributeOffset32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x485cd4, 0x32828 bytes
    //
    _m7(sdk::unknown_ptr) get_message_attribute_offset32;
    
    // [AlpcpGetMessageAttributeSize32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x51a288, 0x32828 bytes
    //
    _m8(sdk::function<uint32_t(uint32_t)>*) get_message_attribute_size32;
    
    // [AlpcpLockPortExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x96ce5c, 0x1fd000 bytes
    //
    _m9(sdk::function<void(struct alpc::port_t*)>*) lock_port_exclusive;
    
    // [AlpcpQueryHeadCanceledQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x668390, 0x1fd000 bytes
    //
    _n0(sdk::unknown_ptr) query_head_canceled_queue;
    
    // [AlpcpQueueIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2f9c1c, 0x1fd000 bytes
    //
    _n1(sdk::unknown_ptr) queue_io_completion;
    
    // [AlpcpReceiveView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x46248c, 0x32828 bytes
    //
    _n2(sdk::unknown_ptr) receive_view;
    
    // [AlpcpReleaseDirectAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xc8844, 0x32828 bytes
    //
    _n3(sdk::unknown_ptr) release_direct_attribute;
    
    // [AlpcpStartInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4602f8, 0x32828 bytes
    //
    _n4(sdk::unknown_ptr) start_initialization;
    
    // [AlpcpUnlockIncomingQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x96ce7c, 0x1fd000 bytes
    //
    _n5(sdk::function<void(struct alpc::port_t*)>*) unlock_incoming_queue;
    
    // [AlpcpUnlockPortExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x96ceb8, 0x1fd000 bytes
    //
    _n6(sdk::function<void(struct alpc::port_t*)>*) unlock_port_exclusive;
    
    // [AlpcpDereferenceProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8bf350, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8bdb00, 0x1fe000 bytes
    //
    _n7(sdk::function<void(struct nt::eprocess_t*)>*) dereference_process;
    
    // [AlpcpLockCommunicationInfoShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8bfe90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8be640, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) lock_communication_info_shared;
    
    // [AlpcpLockPortShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8bf36c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8bdb1c, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) lock_port_shared;
    
    // [AlpcpReferenceProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8bf474, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8bdc24, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) reference_process;
    
    // [AlpcpUnlockCommunicationInfoShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8bfeac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8be65c, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) unlock_communication_info_shared;
    
    // [AlpcpAvailableBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c7900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f24b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c6ca4, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) available_buffer_size;
    
    // [AlpcpExposeCapturedContextAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66bad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ae470, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de5a0, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) expose_captured_context_attribute;
    
    // [AlpcpExposeContextAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x661778, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c7fec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d5358, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) expose_context_attribute;
    
    // [AlpcpExposeContextAttribute32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x654af4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c8374, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c8934, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) expose_context_attribute32;
    
    // [AlpcpExposeHandleAttribute32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x658ce4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ce710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cc5b4, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) expose_handle_attribute32;
    
    // [AlpcpExposeViewAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6520b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bb1d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c6258, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) expose_view_attribute;
    
    // [AlpcpExposeViewAttribute32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x652050, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bb16c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c61f8, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) expose_view_attribute32;
    
    // [AlpcpExposeViewAttributeInSenderContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6985ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f281c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6159cc, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) expose_view_attribute_in_sender_context;
    
    // [AlpcpInsertMessageDirectQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x655278, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bbd84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c8db8, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) insert_message_direct_queue;
    
    // [AlpcpPortQueryServerSessionInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64031c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79ef6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b6a9c, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) port_query_server_session_info;
    
    // [AlpcpQueryHeadLargeQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c12d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b5780, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x60bdb0, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) query_head_large_queue;
    
    // [AlpcpReceiveDirectMessagePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64c120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b009c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bebc0, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) receive_direct_message_port;
    
    // [AlpcpReferenceReplyTargetPorts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6fe07c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f0f38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64b05c, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) reference_reply_target_ports;
    
    // [AlpcpUnlockPortShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8bf490, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96c924, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bdc40, 0x1fe000 bytes
    //
    _p5(sdk::function<void(struct alpc::port_t*)>*) unlock_port_shared;
    
    // [AlpcpAcceptConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45c2e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fad88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ee894, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x647d68, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) accept_connect_port;
    
    // [AlpcpAdjustCompletionListConcurrencyCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x481a64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65e710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96d4d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x676a6c, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) adjust_completion_list_concurrency_count;
    
    // [AlpcpAllocateBlob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x462bb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bb460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a2e50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x611a90, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) allocate_blob;
    
    // [AlpcpAllocateBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49792c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x670f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d8260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e4790, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) allocate_buffer;
    
    // [AlpcpAllocateCompletionBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x473840, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x649e38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8914c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bbc00, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) allocate_completion_buffer;
    
    // [AlpcpAllocateCompletionPacketLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4103f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5eea2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71f9c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x643a6c, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) allocate_completion_packet_lookaside;
    
    // [AlpcpAllocateFromBitmap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x473930, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x649f04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8915a6, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bbccc, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) allocate_from_bitmap;
    
    // [AlpcpAllocateMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45fe44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fbe7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6edef4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x648e5c, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) allocate_message;
    
    // [AlpcpAllocateMessageFromExtendedTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x659d94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bfd70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96ccec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8be520, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) allocate_message_from_extended_tables;
    
    // [AlpcpAllocateMessageFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x486ecc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65eb10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c4070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d21d0, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) allocate_message_function;
    
    // [AlpcpAllocateMessageLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6597bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bf84c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bdffc, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) allocate_message_log;
    
    // [AlpcpAllocateSnapshotMessageLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6598b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bf930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e6f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8be0e0, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) allocate_snapshot_message_log;
    
    // [AlpcpAssociateIoCompletionPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4818b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65dfb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71f484, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x676814, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) associate_io_completion_port;
    
    // [AlpcpCancelMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45db7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fd7f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f0754, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64a7d0, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) cancel_message;
    
    // [AlpcpCancelMessagesByRequestor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45f300, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fa288, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f0158, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x647268, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) cancel_messages_by_requestor;
    
    // [AlpcpCaptureAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4bfd40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b8040, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a1af0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60e670, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) capture_attributes;
    
    // [AlpcpCaptureContextAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c0280, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b8c90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a1770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60f2c0, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) capture_context_attribute;
    
    // [AlpcpCaptureContextAttribute32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485394, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6576f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c87d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cb378, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) capture_context_attribute32;
    
    // [AlpcpCaptureDirectAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c1ba0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65334c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b5dd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c7604, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) capture_direct_attribute;
    
    // [AlpcpCaptureDirectAttribute32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492cf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x655998, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cd4c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c94d8, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) capture_direct_attribute32;
    
    // [AlpcpCaptureHandleAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47e870, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x654238, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76c448, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c807c, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) capture_handle_attribute;
    
    // [AlpcpCaptureHandleAttribute32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51aba0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756574, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x671fc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75dfc4, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) capture_handle_attribute32;
    
    // [AlpcpCaptureHandleAttributeInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47e8b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65428c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76c5a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c80d0, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) capture_handle_attribute_internal;
    
    // [AlpcpCaptureIdMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45e300, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b9860, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f3480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60fe90, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) capture_id_message;
    
    // [AlpcpCaptureMessageData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47cc4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64f0d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f23cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c2448, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) capture_message_data;
    
    // [AlpcpCaptureMessageDataSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4bd430, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b7e30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a3870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60e460, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) capture_message_data_safe;
    
    // [AlpcpCaptureSecurityAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c12f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b9a8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f2bc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6100bc, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) capture_security_attribute;
    
    // [AlpcpCaptureSecurityAttribute32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48b05c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6568fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cbb64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ca57c, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) capture_security_attribute32;
    
    // [AlpcpCaptureSecurityAttributeInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48b0e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b9b64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f2c98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x610194, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) capture_security_attribute_internal;
    
    // [AlpcpCaptureViewAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46034c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x698ac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f266c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70a18c, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) capture_view_attribute;
    
    // [AlpcpCaptureViewAttribute32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497b40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66fa6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x674f38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e302c, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) capture_view_attribute32;
    
    // [AlpcpCaptureViewAttributeInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46038c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x698b10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f26c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70a1dc, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) capture_view_attribute_internal;
    
    // [AlpcpCaptureWorkOnBehalfAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485a6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65c5fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c7e60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d0400, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) capture_work_on_behalf_attribute;
    
    // [AlpcpChargePagedPoolQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x462798, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bb420, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f2f8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x611a50, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) charge_paged_pool_quota;
    
    // [AlpcpCheckConnectionSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45a85c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fe188, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ed050, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64b168, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) check_connection_security;
    
    // [AlpcpCleanupProcessViews]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f9d04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x705c88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7675a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65ffec, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) cleanup_process_views;
    
    // [AlpcpClearOwnerPortMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45e190, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fe048, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f0fbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64b028, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) clear_owner_port_message;
    
    // [AlpcpClosePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45fddc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f98b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f0470, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x646890, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) close_port;
    
    // [AlpcpCompleteDeferSignalRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4741ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bb1f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f2508, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x611828, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) complete_defer_signal_request;
    
    // [AlpcpCompleteDeferSignalRequestAndWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x480b24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x653e6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b471c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c7fec, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) complete_defer_signal_request_and_wait;
    
    // [AlpcpCompleteDispatchMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4bc810, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b73b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a30e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60d9e0, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) complete_dispatch_message;
    
    // [AlpcpCompletionListDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308260, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a820, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40220, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a7a0, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) completion_list_database;
    
    // [AlpcpConnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45d0b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fa8e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6edfcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6478c4, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) connect_port;
    
    // [AlpcpCreateClientPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45d484, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fb9e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ee3a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6489c8, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) create_client_port;
    
    // [AlpcpCreateConnectionPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48cd70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6636a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c60f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d6848, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) create_connection_port;
    
    // [AlpcpCreatePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45cc44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fc974, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ee830, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x649954, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) create_port;
    
    // [AlpcpCreateRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45ea1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ff0b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f5c20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6453f4, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) create_region;
    
    // [AlpcpCreateReserve]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47ca64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64ee84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c9f04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c21f4, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) create_reserve;
    
    // [AlpcpCreateSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47bdc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ff3c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f5d60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x642514, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) create_section;
    
    // [AlpcpCreateSectionView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45e960, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fefb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f5b24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6452f8, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) create_section_view;
    
    // [AlpcpCreateSecurityContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4625f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bb2a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f2e08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6118d0, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) create_security_context;
    
    // [AlpcpCreateView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4627d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bcdf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f41ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61270c, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) create_view;
    
    // [AlpcpDeferredFreeCompletionPacketLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa70d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a89c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2eaa00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dab5c, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) deferred_free_completion_packet_lookaside;
    
    // [AlpcpDeleteBlob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4608d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b9dac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f5368, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6103dc, 0x1fe000 bytes
    //
    _u9(sdk::function<uint8_t(void*)>*) delete_blob;
    
    // [AlpcpDeletePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45ff8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f8e70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f04f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x645e50, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) delete_port;
    
    // [AlpcpDeleteView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4608a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x698e78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f5334, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6129e8, 0x1fe000 bytes
    //
    _v1(sdk::function<uint8_t(struct nt::kalpc_view_t*)>*) delete_view;
    
    // [AlpcpDereferenceBlobEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x460da4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b99b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f3f0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60ffe0, 0x1fe000 bytes
    //
    _v2(sdk::function<void(void*, int32_t)>*) dereference_blob_ex;
    
    // [AlpcpDestroyBlob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c36c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x643a6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f3f44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b812c, 0x1fe000 bytes
    //
    _v3(sdk::function<void(void*)>*) destroy_blob;
    
    // [AlpcpDestroyPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45fd08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f904c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ef874, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64602c, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) destroy_port;
    
    // [AlpcpDisconnectPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45ef60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f9f34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6efe24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x646f14, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) disconnect_port;
    
    // [AlpcpDispatchCloseMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45be68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fa5f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ecea4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6475d4, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) dispatch_close_message;
    
    // [AlpcpDispatchConnectionRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45b788, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fd2bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ed6a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64a29c, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) dispatch_connection_request;
    
    // [AlpcpDispatchMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45cb48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fb6b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ef2c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x648698, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) dispatch_message;
    
    // [AlpcpDispatchNewMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4be280, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b7070, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a2a30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60d6a0, 0x1fe000 bytes
    //
    _v9(sdk::function<int32_t(struct alpc::dispatch_context_t*)>*) dispatch_new_message;
    
    // [AlpcpDispatchReplyToPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46d630, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fdce0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f0c38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64acc0, 0x1fe000 bytes
    //
    _w0(sdk::function<int32_t(struct alpc::dispatch_context_t*)>*) dispatch_reply_to_port;
    
    // [AlpcpDispatchReplyToWaitingThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45b990, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b57a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a0fd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60bdd0, 0x1fe000 bytes
    //
    _w1(sdk::function<int32_t(struct alpc::dispatch_context_t*)>*) dispatch_reply_to_waiting_thread;
    
    // [AlpcpDoPortCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45fb18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f992c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6efd00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64690c, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) do_port_cleanup;
    
    // [AlpcpDummyEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab530, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb968, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df30, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb968, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) dummy_event;
    
    // [AlpcpEndInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x460adc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ff664, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f4168, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6427b4, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) end_initialization;
    
    // [AlpcpEnterAllocationEventMessageLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6599dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bfa40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e804, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8be1f0, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) enter_allocation_event_message_log;
    
    // [AlpcpEnterFreeEventMessageLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x659ae0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bfb0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e8d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8be2bc, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) enter_free_event_message_log;
    
    // [AlpcpEnterStateChangeEventMessageLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x659b78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bfb74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e938, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8be324, 0x1fe000 bytes
    //
    _w7(sdk::function<void(struct nt::kalpc_message_t*)>*) enter_state_change_event_message_log;
    
    // [AlpcpEnumerateResourcesPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x460678, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x698dd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f569c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70a4a4, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) enumerate_resources_port;
    
    // [AlpcpExposeAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4bf2b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b4730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a58c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60ad60, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) expose_attributes;
    
    // [AlpcpExposeHandleAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4bf940, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b4da0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a5f04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60b3d0, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) expose_handle_attribute;
    
    // [AlpcpExposeTokenAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4bfb10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b4c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a5d00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60b230, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) expose_token_attribute;
    
    // [AlpcpExposeWorkOnBehalfAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4bfcb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b4b80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a5e90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60b1b0, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) expose_work_on_behalf_attribute;
    
    // [AlpcpFlushCancelQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45f910, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f9e70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6efc30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x646e50, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) flush_cancel_queue;
    
    // [AlpcpFlushMessagesByRequestor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x492d7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66c8d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ec6ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6df920, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) flush_messages_by_requestor;
    
    // [AlpcpFlushMessagesPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45f55c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f9b58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ef908, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x646b38, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) flush_messages_port;
    
    // [AlpcpFlushQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45f734, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f9d14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6efac4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x646cf4, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) flush_queue;
    
    // [AlpcpFlushResourcesPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45f9e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f9a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f0360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x646a30, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) flush_resources_port;
    
    // [AlpcpForceUnlinkSecureView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d278, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c0480, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96d404, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bec30, 0x1fe000 bytes
    //
    _x8(sdk::unknown_ptr) force_unlink_secure_view;
    
    // [AlpcpFormatConnectionRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45e380, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fb7d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6edce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6487b8, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) format_connection_request;
    
    // [AlpcpFreeBitmap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51b344, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c054c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96d570, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8becfc, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) free_bitmap;
    
    // [AlpcpFreeBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41960c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66f530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e26b0, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) free_buffer;
    
    // [AlpcpFreeCompletionList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48209c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65e63c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96d5ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x676998, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) free_completion_list;
    
    // [AlpcpFreeCompletionPacketLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa67d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a8e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37a374, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2da43c, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) free_completion_packet_lookaside;
    
    // [AlpcpFreeMessageFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42568c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x690250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bbe30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ef780, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) free_message_function;
    
    // [AlpcpFreeMessageLogListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308290, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a8a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc401c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a820, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) free_message_log_list_head;
    
    // [AlpcpFreeMessageSnapshotListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3082c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a8b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc401d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a810, 0x1fe000 bytes
    //
    _y6(sdk::unknown_ptr) free_message_snapshot_list_head;
    
    // [AlpcpGetDataFromUserVaSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47c4ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65682c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96ce0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ca52c, 0x1fe000 bytes
    //
    _y7(sdk::function<void(struct nt::kalpc_message_t*, void*)>*) get_data_from_user_va_safe;
    
    // [AlpcpGetEffectiveTokenMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48b3e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61a40c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b9b68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66aeec, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) get_effective_token_message;
    
    // [AlpcpGetPortNameInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65aac0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bff50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96cf68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8be700, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) get_port_name_information;
    
    // [AlpcpImpersonateMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c1db0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b9600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f3240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60fc30, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) impersonate_message;
    
    // [AlpcpInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56c42c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7afbdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x865048, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b776c, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) init_system;
    
    // [AlpcpInitializeCompletionList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x481b80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65e138, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96d648, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x675f64, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) initialize_completion_list;
    
    // [AlpcpInitializeMessageLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56c6f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7afec4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x865340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b7a54, 0x1fe000 bytes
    //
    _z3(sdk::unknown_ptr) initialize_message_log;
    
    // [AlpcpInitializePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45cca0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fc7e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6edb64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6497c8, 0x1fe000 bytes
    //
    _z4(sdk::unknown_ptr) initialize_port;
    
    // [AlpcpInsertCompletionListEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4768e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x650298, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8916f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c46e8, 0x1fe000 bytes
    //
    _z5(sdk::unknown_ptr) insert_completion_list_entry;
    
    // [AlpcpInsertMessageCanceledQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x494008, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67461c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e41d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e79ac, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) insert_message_canceled_queue;
    
    // [AlpcpInsertMessageLargeMessageQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48f20c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6617ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c8064, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d53cc, 0x1fe000 bytes
    //
    _z7(sdk::unknown_ptr) insert_message_large_message_queue;
    
    // [AlpcpInsertMessageMainQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4902b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x671094, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dfb30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e4830, 0x1fe000 bytes
    //
    _z8(sdk::unknown_ptr) insert_message_main_queue;
    
    // [AlpcpInsertMessagePendingQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x476b00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fe378, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ef7cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64b358, 0x1fe000 bytes
    //
    _z9(sdk::unknown_ptr) insert_message_pending_queue;
    
    // [AlpcpInsertResourcePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x462b04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bd04c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f4408, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x612964, 0x1fe000 bytes
    //
    _a0(sdk::unknown_ptr) insert_resource_port;
    
    // [AlpcpInvokeLogCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b18c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c0a5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e104, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bf20c, 0x1fe000 bytes
    //
    _a1(sdk::unknown_ptr) invoke_log_callbacks;
    
    // [AlpcpLocateMessageLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x659d50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bfd24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96eae4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8be4d4, 0x1fe000 bytes
    //
    _a2(sdk::unknown_ptr) locate_message_log;
    
    // [AlpcpLocateSectionView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4605a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x698d38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f55e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70a404, 0x1fe000 bytes
    //
    _a3(sdk::unknown_ptr) locate_section_view;
    
    // [AlpcpLocateView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x462cf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69873c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f29a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x615b5c, 0x1fe000 bytes
    //
    _a4(sdk::unknown_ptr) locate_view;
    
    // [AlpcpLockForCachedReferenceBlob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45ff10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fbf5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a305c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x648f3c, 0x1fe000 bytes
    //
    _a5(sdk::function<void(void*)>*) lock_for_cached_reference_blob;
    
    // [AlpcpLogCallbackListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5ad0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0ec10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc090a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0ec50, 0x1fe000 bytes
    //
    _a6(sdk::unknown_ptr) log_callback_list_head;
    
    // [AlpcpLogClosePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b244, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c0af0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e198, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bf2a0, 0x1fe000 bytes
    //
    _a7(sdk::unknown_ptr) log_close_port;
    
    // [AlpcpLogConnectFail]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b2a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c0b60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e208, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bf310, 0x1fe000 bytes
    //
    _a8(sdk::unknown_ptr) log_connect_fail;
    
    // [AlpcpLogConnectRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b2fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c0bc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e27c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bf378, 0x1fe000 bytes
    //
    _a9(sdk::unknown_ptr) log_connect_request;
    
    // [AlpcpLogConnectSuccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b358, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c0c38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e2ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bf3e8, 0x1fe000 bytes
    //
    _b0(sdk::unknown_ptr) log_connect_success;
    
    // [AlpcpLogEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342341, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4890, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17310, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4890, 0x1fe000 bytes
    //
    _b1(sdk::unknown_ptr) log_enabled;
    
    // [AlpcpLogLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308238, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a7d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc401f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a778, 0x1fe000 bytes
    //
    _b2(sdk::unknown_ptr) log_lock;
    
    // [AlpcpLogReceiveMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b3b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c0ca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e358, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bf450, 0x1fe000 bytes
    //
    _b3(sdk::unknown_ptr) log_receive_message;
    
    // [AlpcpLogSendMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b40c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c0d10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e3c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bf4c0, 0x1fe000 bytes
    //
    _b4(sdk::unknown_ptr) log_send_message;
    
    // [AlpcpLogUnwait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b468, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c0d80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e438, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bf530, 0x1fe000 bytes
    //
    _b5(sdk::function<void(int32_t)>*) log_unwait;
    
    // [AlpcpLogWaitForNewMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b4c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c0de8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e4a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bf598, 0x1fe000 bytes
    //
    _b6(sdk::unknown_ptr) log_wait_for_new_message;
    
    // [AlpcpLogWaitForReply]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65b5b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c0ee4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96e5a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bf694, 0x1fe000 bytes
    //
    _b7(sdk::unknown_ptr) log_wait_for_reply;
    
    // [AlpcpLookasidePacketCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa71b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x358b60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32f3f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d9b50, 0x1fe000 bytes
    //
    _b8(sdk::unknown_ptr) lookaside_packet_callback_routine;
    
    // [AlpcpLookasides]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33bdc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcebb80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0b5c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcebb80, 0x1fe000 bytes
    //
    _b9(sdk::unknown_ptr) lookasides;
    
    // [AlpcpLookupMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c1970, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b8620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a1840, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60ec50, 0x1fe000 bytes
    //
    _c0(sdk::unknown_ptr) lookup_message;
    
    // [AlpcpMapLegacyPortRemoteView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53723c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x753314, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea5c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75abd4, 0x1fe000 bytes
    //
    _c1(sdk::unknown_ptr) map_legacy_port_remote_view;
    
    // [AlpcpMapLegacyPortView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47babc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6febec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7caac4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x644f30, 0x1fe000 bytes
    //
    _c2(sdk::unknown_ptr) map_legacy_port_view;
    
    // [AlpcpMessageLogEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308280, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a8c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc401e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a7f0, 0x1fe000 bytes
    //
    _c3(sdk::unknown_ptr) message_log_enabled;
    
    // [AlpcpMessageLogListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3082a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a880, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc401b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a830, 0x1fe000 bytes
    //
    _c4(sdk::unknown_ptr) message_log_list_head;
    
    // [AlpcpMessageLogLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308288, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a870, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc401a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a7f8, 0x1fe000 bytes
    //
    _c5(sdk::unknown_ptr) message_log_lock;
    
    // [AlpcpMessageLogLookupTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3082b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a890, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc401e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a800, 0x1fe000 bytes
    //
    _c6(sdk::unknown_ptr) message_log_lookup_table;
    
    // [AlpcpNextCallbackId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be340, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22300, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48300, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22300, 0x1fe000 bytes
    //
    _c7(sdk::unknown_ptr) next_callback_id;
    
    // [AlpcpNPLookasides]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33bf40, 0x32828 bytes
    // ntoskrnl.exe .data:0xcebb00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0b540, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcebb00, 0x1fe000 bytes
    //
    _c8(sdk::unknown_ptr) np_lookasides;
    
    // [AlpcpOpenPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485ae0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65a800, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bb100, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ce220, 0x1fe000 bytes
    //
    _c9(sdk::unknown_ptr) open_port;
    
    // [AlpcpPortList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308250, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a7f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40210, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a790, 0x1fe000 bytes
    //
    _d0(sdk::unknown_ptr) port_list;
    
    // [AlpcpPortListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308248, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a800, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40200, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a788, 0x1fe000 bytes
    //
    _d1(sdk::unknown_ptr) port_list_lock;
    
    // [AlpcpPortMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1f30, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96750, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a4a0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95940, 0x1fe000 bytes
    //
    _d2(sdk::unknown_ptr) port_mapping;
    
    // [AlpcpPortQueryBasicInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46f300, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6402c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79ef10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b6a40, 0x1fe000 bytes
    //
    _d3(sdk::unknown_ptr) port_query_basic_info;
    
    // [AlpcpPortQueryConnectedSidInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46f358, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6404b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79f108, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b6c38, 0x1fe000 bytes
    //
    _d4(sdk::unknown_ptr) port_query_connected_sid_info;
    
    // [AlpcpPortQueryServerInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65ab74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c0008, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96d020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8be7b8, 0x1fe000 bytes
    //
    _d5(sdk::unknown_ptr) port_query_server_info;
    
    // [AlpcpPrepareViewForDelivery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4604cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x698c54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f573c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70a320, 0x1fe000 bytes
    //
    _d6(sdk::unknown_ptr) prepare_view_for_delivery;
    
    // [AlpcpProbeAndCaptureMessageHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45c1c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fd204, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f25b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64a1e4, 0x1fe000 bytes
    //
    _d7(sdk::unknown_ptr) probe_and_capture_message_header;
    
    // [AlpcpProbeForWriteMessageHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4741e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bb234, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f2544, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x611864, 0x1fe000 bytes
    //
    _d8(sdk::unknown_ptr) probe_for_write_message_header;
    
    // [AlpcpProbeMessageAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45a77c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f930c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ecd98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6462ec, 0x1fe000 bytes
    //
    _d9(sdk::unknown_ptr) probe_message_attributes;
    
    // [AlpcpProcessConnectionRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45af94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f9418, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ed220, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6463f8, 0x1fe000 bytes
    //
    _e0(sdk::unknown_ptr) process_connection_request;
    
    // [AlpcpProcessSynchronousRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c02e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b5b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a6130, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60c1a0, 0x1fe000 bytes
    //
    _e1(sdk::unknown_ptr) process_synchronous_request;
    
    // [AlpcpQueryHandleInformationMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x480bc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61adac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76c49c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66b1a4, 0x1fe000 bytes
    //
    _e2(sdk::unknown_ptr) query_handle_information_message;
    
    // [AlpcpQueryRemoteView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48091c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f8594, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bbc74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x645570, 0x1fe000 bytes
    //
    _e3(sdk::unknown_ptr) query_remote_view;
    
    // [AlpcpQuerySidMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48b2e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61a35c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b9ab8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66ae3c, 0x1fe000 bytes
    //
    _e4(sdk::unknown_ptr) query_sid_message;
    
    // [AlpcpQuerySidToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48b34c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61a2a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b9c24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66ad84, 0x1fe000 bytes
    //
    _e5(sdk::unknown_ptr) query_sid_token;
    
    // [AlpcpQueryTokenModifiedIdMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65a2b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bf38c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b9a18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bdb3c, 0x1fe000 bytes
    //
    _e6(sdk::unknown_ptr) query_token_modified_id_message;
    
    // [AlpcpQueueIoCompletionPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc2c28, 0x32828 bytes
    // ntoskrnl.exe .text:0x28ed00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f9a10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3349b4, 0x1fe000 bytes
    //
    _e7(sdk::function<void(struct alpc::port_t*, uint8_t, uint8_t, uint8_t)>*) queue_io_completion_port;
    
    // [AlpcpReadMessageData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c18b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b6440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f2354, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60ca70, 0x1fe000 bytes
    //
    _e8(sdk::function<void(struct nt::kalpc_message_t*, void*)>*) read_message_data;
    
    // [AlpcpReceiveLegacyConnectionReply]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4807f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f8770, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bbb2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x645750, 0x1fe000 bytes
    //
    _e9(sdk::unknown_ptr) receive_legacy_connection_reply;
    
    // [AlpcpReceiveLegacyMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x473ed0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6baf40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f2080, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x611570, 0x1fe000 bytes
    //
    _f0(sdk::unknown_ptr) receive_legacy_message;
    
    // [AlpcpReceiveMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4be8e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b4040, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a3d30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60a670, 0x1fe000 bytes
    //
    _f1(sdk::unknown_ptr) receive_message;
    
    // [AlpcpReceiveMessagePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c0a10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b4f70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a5250, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60b5a0, 0x1fe000 bytes
    //
    _f2(sdk::unknown_ptr) receive_message_port;
    
    // [AlpcpReceiveSynchronousReply]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40db70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b6230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a6780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60c860, 0x1fe000 bytes
    //
    _f3(sdk::unknown_ptr) receive_synchronous_reply;
    
    // [AlpcpReferenceAndLockTargetPortsAndCommunicationInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45bff4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fa7a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a2cf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x647784, 0x1fe000 bytes
    //
    _f4(sdk::unknown_ptr) reference_and_lock_target_ports_and_communication_info;
    
    // [AlpcpReferenceBlob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x460874, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b9d30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a1ab0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x610360, 0x1fe000 bytes
    //
    _f5(sdk::function<int64_t(void*)>*) reference_blob;
    
    // [AlpcpReferenceConnectedPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4233b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b98f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f3508, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60ff20, 0x1fe000 bytes
    //
    _f6(sdk::unknown_ptr) reference_connected_port;
    
    // [AlpcpReferenceMessageByWaitingThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65a6cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c05c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96db38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bed78, 0x1fe000 bytes
    //
    _f7(sdk::unknown_ptr) reference_message_by_waiting_thread;
    
    // [AlpcpReferenceMessageByWaitingThreadPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65a850, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c06dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96dc4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bee8c, 0x1fe000 bytes
    //
    _f8(sdk::unknown_ptr) reference_message_by_waiting_thread_port;
    
    // [AlpcpReferenceMessageByWaitingThreadPortQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65aa70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8c0854, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96ddc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8bf004, 0x1fe000 bytes
    //
    _f9(sdk::unknown_ptr) reference_message_by_waiting_thread_port_queue;
    
    // [AlpcpRegionGranularity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab368, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5e8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc10, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5e8, 0x1fe000 bytes
    //
    _g0(sdk::unknown_ptr) region_granularity;
    
    // [AlpcpRegisterCompletionListDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x481fc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65e5a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96de1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6763d0, 0x1fe000 bytes
    //
    _g1(sdk::unknown_ptr) register_completion_list_database;
    
    // [AlpcpRegisteredTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25b450, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x6610, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x6d50, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x6220, 0x1fe000 bytes
    //
    _g2(sdk::unknown_ptr) registered_types;
    
    // [AlpcpReleaseAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45cb68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fb6f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a17cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6486d0, 0x1fe000 bytes
    //
    _g3(sdk::unknown_ptr) release_attributes;
    
    // [AlpcpReleaseMessageAttributesOnCancel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45e1bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fe0fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f06c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64b0dc, 0x1fe000 bytes
    //
    _g4(sdk::unknown_ptr) release_message_attributes_on_cancel;
    
    // [AlpcpReleasePagedPoolQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4602d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x699324, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f3bd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b9fc4, 0x1fe000 bytes
    //
    _g5(sdk::function<void(struct nt::eprocess_t*, uint64_t)>*) release_paged_pool_quota;
    
    // [AlpcpReleaseViewAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x495090, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6febb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6ef0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64bb94, 0x1fe000 bytes
    //
    _g6(sdk::unknown_ptr) release_view_attribute;
    
    // [AlpcpRemoveMessageFromPendingQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45e248, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fdf68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f0ff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64af48, 0x1fe000 bytes
    //
    _g7(sdk::unknown_ptr) remove_message_from_pending_queue;
    
    // [AlpcpRemoveMessagePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49fe50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6762a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e99dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9508, 0x1fe000 bytes
    //
    _g8(sdk::unknown_ptr) remove_message_port;
    
    // [AlpcpRemoveResourcePort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x460fb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x699a90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f5214, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x635d40, 0x1fe000 bytes
    //
    _g9(sdk::unknown_ptr) remove_resource_port;
    
    // [AlpcpReplyLegacySynchronousRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47431c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fd424, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f10c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64a404, 0x1fe000 bytes
    //
    _h0(sdk::function<int32_t(struct alpc::dispatch_context_t*, struct nt::port_message_t*, char)>*) reply_legacy_synchronous_request;
    
    // [AlpcpRestoreWriteAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46105c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x699b10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f59d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63815c, 0x1fe000 bytes
    //
    _h1(sdk::unknown_ptr) restore_write_access;
    
    // [AlpcpReturnMessageOnInsufficientBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48f140, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6616b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c7ef4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d5298, 0x1fe000 bytes
    //
    _h2(sdk::unknown_ptr) return_message_on_insufficient_buffer;
    
    // [AlpcpSecondaryMessageTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa0d0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0e8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c118, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0e8, 0x1fe000 bytes
    //
    _h3(sdk::unknown_ptr) secondary_message_tables;
    
    // [AlpcpSendCloseMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45ee44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fa4d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ef6ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6474b4, 0x1fe000 bytes
    //
    _h4(sdk::unknown_ptr) send_close_message;
    
    // [AlpcpSendLegacySynchronousRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45a9cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fc9d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f14d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6499b8, 0x1fe000 bytes
    //
    _h5(sdk::unknown_ptr) send_legacy_synchronous_request;
    
    // [AlpcpSendMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4bd690, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b6630, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a20f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60cc60, 0x1fe000 bytes
    //
    _h6(sdk::function<int32_t(struct alpc::dispatch_context_t*, struct nt::port_message_t*, struct alpc::message_attributes_t*, char)>*) send_message;
    
    // [AlpcpSetOwnerPortMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45b944, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fdff4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a30a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64afd4, 0x1fe000 bytes
    //
    _h7(sdk::unknown_ptr) set_owner_port_message;
    
    // [AlpcpSetOwnerProcessPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45d958, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fbe24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ed8a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x648e04, 0x1fe000 bytes
    //
    _h8(sdk::unknown_ptr) set_owner_process_port;
    
    // [AlpcpSetupMessageDataForDeferredCopy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45cbcc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fb75c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ef340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64873c, 0x1fe000 bytes
    //
    _h9(sdk::unknown_ptr) setup_message_data_for_deferred_copy;
    
    // [AlpcpSignal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeac60, 0x32828 bytes
    // ntoskrnl.exe .text:0x28ec48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x293390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3348fc, 0x1fe000 bytes
    //
    _i0(sdk::unknown_ptr) signal;
    
    // [AlpcpSignalAndWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x52a20, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d8ed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2932d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x259f40, 0x1fe000 bytes
    //
    _i1(sdk::unknown_ptr) signal_and_wait;
    
    // [AlpcpSignalPortAndUnlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x481af8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676568, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6754, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e97dc, 0x1fe000 bytes
    //
    _i2(sdk::unknown_ptr) signal_port_and_unlock;
    
    // [AlpcpTrackPortReferences]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x491820, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66f8a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dce30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e2e68, 0x1fe000 bytes
    //
    _i3(sdk::unknown_ptr) track_port_references;
    
    // [AlpcpTransferQuotaMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45e138, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fdc80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f0b0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64ac60, 0x1fe000 bytes
    //
    _i4(sdk::unknown_ptr) transfer_quota_message;
    
    // [AlpcpTryLockForCachedReferenceBlob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4955fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672390, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a60c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e5adc, 0x1fe000 bytes
    //
    _i5(sdk::unknown_ptr) try_lock_for_cached_reference_blob;
    
    // [AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x490c20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66d6f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d784c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e07a0, 0x1fe000 bytes
    //
    _i6(sdk::unknown_ptr) unlock_and_dereference_target_ports_and_communication_info;
    
    // [AlpcpUnlockBlob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c1fe0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b64c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a4380, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60caf0, 0x1fe000 bytes
    //
    _i7(sdk::function<void(void*)>*) unlock_blob;
    
    // [AlpcpUnlockMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45e110, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b3d84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f24d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60a3b4, 0x1fe000 bytes
    //
    _i8(sdk::unknown_ptr) unlock_message;
    
    // [AlpcpUnregisterCompletionListDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4820f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65e698, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96ded8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6769f4, 0x1fe000 bytes
    //
    _i9(sdk::unknown_ptr) unregister_completion_list_database;
    
    // [AlpcpValidateAndSetPortAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45ceac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fbf9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ed900, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x648f7c, 0x1fe000 bytes
    //
    _j0(sdk::unknown_ptr) validate_and_set_port_attributes;
    
    // [AlpcpValidateConnectionMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45c2ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fb670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ef2f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x648650, 0x1fe000 bytes
    //
    _j1(sdk::unknown_ptr) validate_connection_message;
    
    // [AlpcpValidateDataInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65a150, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8bfee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96cef4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8be690, 0x1fe000 bytes
    //
    _j2(sdk::unknown_ptr) validate_data_information;
    
    // [AlpcpValidateMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45c26c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b9d68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f107c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x610398, 0x1fe000 bytes
    //
    _j3(sdk::function<int32_t(struct nt::port_message_t*, uint8_t)>*) validate_message;
    
    // [AlpcpViewGranularity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab36c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5ec, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc0c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb5ec, 0x1fe000 bytes
    //
    _j4(sdk::unknown_ptr) view_granularity;
    
    // [AlpcpViewSearchCallbackFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46073c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x655320, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b9cdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c8e60, 0x1fe000 bytes
    //
    _j5(sdk::unknown_ptr) view_search_callback_function;
    
    // [AlpcpWaitForPortReferences]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46f534, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64041c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79f06c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b6b9c, 0x1fe000 bytes
    //
    _j6(sdk::unknown_ptr) wait_for_port_references;
    
    // [AlpcpWaitForSingleObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc1cd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x255fe4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x360cb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x305384, 0x1fe000 bytes
    //
    _j7(sdk::unknown_ptr) wait_for_single_object;
    
    // [AlpcpWakePolicyDefault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa06c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa074, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c098, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa074, 0x1fe000 bytes
    //
    _j8(sdk::unknown_ptr) wake_policy_default;
    
    // [AlpcpWalkConnectionList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48fe0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x670c1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7de020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e436c, 0x1fe000 bytes
    //
    _j9(sdk::unknown_ptr) walk_connection_list;
};
#include "magic/api.end.hpp"
