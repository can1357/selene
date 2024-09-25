#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_KRESOURCEMANAGER.NotificationAvailable", notification_available, 0x0, 0xc0, true, 0xd1f31ce15ddfdb42)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KRESOURCEMANAGER.cookie", cookie, 0xc0, 0x20, true, 0xaa4c67c2c673af08)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kresourcemanager_state_t), "_KRESOURCEMANAGER.State", state, 0xe0, 0x20, true, 0x2bb831bbd2aea444)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KRESOURCEMANAGER.Flags", flags, 0x100, 0x20, true, 0x88dff1b303a95569)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kmutant_t), "_KRESOURCEMANAGER.Mutex", mutex, 0x140, 0xc0, true, 0x61505067ae730f2f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktmobject_namespace_link_t), "_KRESOURCEMANAGER.NamespaceLink", namespace_link, 0x300, 0x40, true, 0x26521c9f70a148b2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KRESOURCEMANAGER.RmId", rm_id, 0x440, 0x80, true, 0x90465f096bbf0273)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kqueue_t), "_KRESOURCEMANAGER.NotificationQueue", notification_queue, 0x4c0, 0x0, true, 0x4216890dc27dc691)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kmutant_t), "_KRESOURCEMANAGER.NotificationMutex", notification_mutex, 0x6c0, 0xc0, true, 0xca5acaf143d2228c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KRESOURCEMANAGER.EnlistmentHead", enlistment_head, 0x880, 0x80, true, 0x40e0389a4c9afad9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KRESOURCEMANAGER.EnlistmentCount", enlistment_count, 0x900, 0x20, true, 0x674090bce55ae37e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::kenlistment_t*, void*, void*, uint32_t, int64_t*, uint32_t, void*)>*), "_KRESOURCEMANAGER.NotificationRoutine", notification_routine, 0x940, 0x40, true, 0x7ca8abb85f1f5494)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KRESOURCEMANAGER.Key", key, 0x980, 0x40, true, 0xbd864be25ea3cdcc)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KRESOURCEMANAGER.ProtocolListHead", protocol_list_head, 0x9c0, 0x80, true, 0xc7962c53c61491b4)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KRESOURCEMANAGER.PendingPropReqListHead", pending_prop_req_list_head, 0xa40, 0x80, true, 0xe2559bffeb456238)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KRESOURCEMANAGER.CRMListEntry", crm_list_entry, 0xac0, 0x80, true, 0xec7f78bc9616135f)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktm_t*), "_KRESOURCEMANAGER.Tm", tm, 0xb40, 0x40, true, 0x695a8e609c124851)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_KRESOURCEMANAGER.Description", description, 0xb80, 0x80, true, 0xe42efe95bd9ae36)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktmobject_namespace_t), "_KRESOURCEMANAGER.Enlistments", enlistments, 0xc00, 0x40, true, 0x898b258118821099)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kresourcemanager_completion_binding_t), "_KRESOURCEMANAGER.CompletionBinding", completion_binding, 0x1140, 0x40, true, 0xc3f859d67a4733fc)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#endif