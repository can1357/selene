#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FS_FILTER_CALLBACKS.SizeOfFsFilterCallbacks", size_of_fs_filter_callbacks, 0x0, 0x20, true, 0xac908723d40760ee)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfs_filter_callback_t ), "_FS_FILTER_CALLBACKS.PreAcquireForSectionSynchronization", pre_acquire_for_section_synchronization, 0x40, 0x40, true, 0x5c03b1edbbd5de34)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfs_filter_completion_callback_t ), "_FS_FILTER_CALLBACKS.PostAcquireForSectionSynchronization", post_acquire_for_section_synchronization, 0x80, 0x40, true, 0xa170fcf8d5a8d06c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfs_filter_callback_t ), "_FS_FILTER_CALLBACKS.PreReleaseForSectionSynchronization", pre_release_for_section_synchronization, 0xc0, 0x40, true, 0x6258103eb206bcf8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfs_filter_completion_callback_t ), "_FS_FILTER_CALLBACKS.PostReleaseForSectionSynchronization", post_release_for_section_synchronization, 0x100, 0x40, true, 0xed69f14280e13a3c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfs_filter_callback_t ), "_FS_FILTER_CALLBACKS.PreAcquireForCcFlush", pre_acquire_for_cc_flush, 0x140, 0x40, true, 0xfe320292fb1a2915)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfs_filter_completion_callback_t ), "_FS_FILTER_CALLBACKS.PostAcquireForCcFlush", post_acquire_for_cc_flush, 0x180, 0x40, true, 0xaf0b2c5deb5fe285)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfs_filter_callback_t ), "_FS_FILTER_CALLBACKS.PreReleaseForCcFlush", pre_release_for_cc_flush, 0x1c0, 0x40, true, 0x1f35a58b9e6dbe39)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfs_filter_completion_callback_t ), "_FS_FILTER_CALLBACKS.PostReleaseForCcFlush", post_release_for_cc_flush, 0x200, 0x40, true, 0xa34990da461136cb)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfs_filter_callback_t ), "_FS_FILTER_CALLBACKS.PreAcquireForModifiedPageWriter", pre_acquire_for_modified_page_writer, 0x240, 0x40, true, 0xbf43ec91771307b4)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfs_filter_completion_callback_t ), "_FS_FILTER_CALLBACKS.PostAcquireForModifiedPageWriter", post_acquire_for_modified_page_writer, 0x280, 0x40, true, 0xd6b2d0637323f8f8)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfs_filter_callback_t ), "_FS_FILTER_CALLBACKS.PreReleaseForModifiedPageWriter", pre_release_for_modified_page_writer, 0x2c0, 0x40, true, 0xc829545d1c25fff5)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfs_filter_completion_callback_t ), "_FS_FILTER_CALLBACKS.PostReleaseForModifiedPageWriter", post_release_for_modified_page_writer, 0x300, 0x40, true, 0xef8038dc361a5da9)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfs_filter_callback_t ), "_FS_FILTER_CALLBACKS.PreQueryOpen", pre_query_open, 0x340, 0x40, true, 0xc6ec7246397a89dc)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfs_filter_completion_callback_t ), "_FS_FILTER_CALLBACKS.PostQueryOpen", post_query_open, 0x380, 0x40, true, 0x8f25e609c87ac2db)
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
#endif