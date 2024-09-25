#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CAgileReferenceViaGit._dwGitCookie", dw_git_cookie, 0x180, 0x20, true, 0x2c9d27dc7a532bba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CAgileReferenceViaGit._channelProcessInitializedCount", channel_process_initialized_count, 0x1a0, 0x20, true, 0xa600fec3380b6f0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "CAgileReferenceViaGit._originalVtable", original_vtable, 0x0, 0x0, false, 0xbe6c1d83a9394627)
#else
#define _m00
#define _m01
#define _m02
#endif