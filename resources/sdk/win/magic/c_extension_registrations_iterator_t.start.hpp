#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::opaque_string_t), "CExtensionRegistrationsIterator._contractId", contract_id, 0x280, 0x40, true, 0xb6a20963bc717e54)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CExtensionRegistrationsIterator._nextClassIndex", next_class_index, 0x300, 0x20, true, 0x4dc35606ed6a6af9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::srwlock_t), "CExtensionRegistrationsIterator._iteratorSRWLock", iterator_srw_lock, 0x0, 0x0, false, 0x5cd36ba93e4ebf80)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::opaque_string_t), "CExtensionRegistrationsIterator._packageFamilyName", package_family_name, 0x0, 0x0, false, 0x8170ed1f140dba0c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "CExtensionRegistrationsIterator._packageName", package_name, 0x0, 0x0, false, 0x7284b6d1bf98e92d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CExtensionRegistrationsIterator._fProcessingInboxAppsStore", f_processing_inbox_apps_store, 0x0, 0x0, false, 0x2afb4a43c27bc598)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CExtensionRegistrationsIterator._currentPackageIndex", current_package_index, 0x0, 0x0, false, 0x38f7de88a2746bac)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "CExtensionRegistrationsIterator._currentPackageId", current_package_id, 0x0, 0x0, false, 0x60e8b6ba41cb9bcb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif