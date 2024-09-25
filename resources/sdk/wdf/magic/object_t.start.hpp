#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "WdfObject.m_ConstructorStatus", m_constructor_status, 0x80, 0x20, true, 0x998ba59d7c0a020b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudf_lock_t), "WdfObject.m_Lock", m_lock, 0x100, 0x40, true, 0x2eb1c6d757c3f519)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WdfObject.m_RefCount", m_ref_count, 0x40, 0x20, true, 0x83c3fc6b455aa765)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class wdf::object_t*), "WdfObject.m_Parent", m_parent, 0x140, 0x40, true, 0x23cc0d4907d1ea4c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class wdf::object_t*), "WdfObject.m_Next", m_next, 0x180, 0x40, true, 0xc4d191af72623811)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WdfObject.m_UniqueObjectId", m_unique_object_id, 0x1c0, 0x20, true, 0x13573adb2eaec5bb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "WdfObject.m_DeleteWaitInAction", m_delete_wait_in_action, 0x1e0, 0x8, true, 0x10e7221c73d9048d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudf_event_t), "WdfObject.m_Event", m_event, 0x200, 0x40, true, 0x6fb1c23014278516)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "WdfObject.m_Name", m_name, 0x240, 0x40, true, 0x99bb6e19a68949d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "WdfObject.m_MarkedForDelete", m_marked_for_delete, 0x280, 0x8, true, 0x1c163034ea99f04d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::rd_type_t), "WdfObject.m_ObjectType", m_object_type, 0x288, 0x8, true, 0x265e1f3047507b28)
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
#define _m09
#define _m10
#endif