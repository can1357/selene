#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FXIO_FORWARD_PROGRESS_CONTEXT.m_NumberOfReservedRequests", m_number_of_reserved_requests, 0x0, 0x20, true, 0xef3d0ef4b388ee62)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_forward_progress_allocate_resources_reserved_t), "_FXIO_FORWARD_PROGRESS_CONTEXT.m_IoReservedResourcesAllocate", m_io_reserved_resources_allocate, 0x40, 0x40, true, 0x39843f2d57d68b00)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_forward_progress_allocate_resources_t), "_FXIO_FORWARD_PROGRESS_CONTEXT.m_IoResourcesAllocate", m_io_resources_allocate, 0x80, 0x40, true, 0x960b2b266b9316ac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_forward_progress_examine_irp_t), "_FXIO_FORWARD_PROGRESS_CONTEXT.m_IoExamineIrp", m_io_examine_irp, 0xc0, 0x40, true, 0x627914979e01a581)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_forward_progress_reserved_policy_t), "_FXIO_FORWARD_PROGRESS_CONTEXT.m_Policy", m_policy, 0x100, 0x20, true, 0x15359d65a27c93a2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FXIO_FORWARD_PROGRESS_CONTEXT.m_ReservedRequestList", m_reserved_request_list, 0x140, 0x80, true, 0xc65c4bb9cb89d255)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FXIO_FORWARD_PROGRESS_CONTEXT.m_ReservedRequestInUseList", m_reserved_request_in_use_list, 0x1c0, 0x80, true, 0xe9faab558a65f89c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FXIO_FORWARD_PROGRESS_CONTEXT.m_PendedIrpList", m_pended_irp_list, 0x240, 0x80, true, 0xb12d66c4c906972a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_no_dynam_t), "_FXIO_FORWARD_PROGRESS_CONTEXT.m_PendedReserveLock", m_pended_reserve_lock, 0x2c0, 0x80, true, 0xd07a255ab1fe12b4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif