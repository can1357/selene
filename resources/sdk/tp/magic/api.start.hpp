#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpWorkOnBehalfClearTicket$ntdll.dll", 0x0, 0x0, false, 0xe513dc3c65275c78)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpWorkOnBehalfSetTicket$ntdll.dll", 0x0, 0x0, false, 0x68be63601f7c8efb)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpSetDefaultPoolCpuSets$ntdll.dll", 0x1114e8, 0x0, true, 0x22210315f9980471)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpSetPoolThreadCpuSets$ntdll.dll", 0x111690, 0x0, true, 0x73371e0fb1de9afb)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpAdjustBindingCount$ntdll.dll", 0x3d704, 0x0, true, 0x87420cd477e49b1a)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct tp::alpc_t**, void*, sdk::function<void(struct tp::callback_instance_t*, void*, struct tp::alpc_t*)>*, void*, struct tp::callback_environ_v3_t*)>*), "$TpAllocAlpcCompletion$ntdll.dll", 0x78da0, 0x0, true, 0xad681cac0200cda6)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct tp::alpc_t**, void*, sdk::function<void(struct tp::callback_instance_t*, void*, struct tp::alpc_t*, void*)>*, void*, struct tp::callback_environ_v3_t*)>*), "$TpAllocAlpcCompletionEx$ntdll.dll", 0x78ea0, 0x0, true, 0xf781308ffc9289bf)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct tp::cleanup_group_t**)>*), "$TpAllocCleanupGroup$ntdll.dll", 0x7d620, 0x0, true, 0xa22e3291eb228b13)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct tp::io_t**, void*, sdk::function<void(struct tp::callback_instance_t*, void*, void*, struct io::status_block_t*, struct tp::io_t*)>*, void*, struct tp::callback_environ_v3_t*)>*), "$TpAllocIoCompletion$ntdll.dll", 0x44310, 0x0, true, 0x780c2d2c29bf5955)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpAllocJobNotification$ntdll.dll", 0x7e270, 0x0, true, 0x96b9cb9237aefc97)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct tp::pool_t**, void*)>*), "$TpAllocPool$ntdll.dll", 0x45d00, 0x0, true, 0xa392cd9699ec3ede)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpAllocPoolInternal$ntdll.dll", 0x452c8, 0x0, true, 0xc9fef92154575ba8)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct tp::timer_t**, sdk::function<void(struct tp::callback_instance_t*, void*, struct tp::timer_t*)>*, void*, struct tp::callback_environ_v3_t*)>*), "$TpAllocTimer$ntdll.dll", 0x40b50, 0x0, true, 0xcba328245c36d0c7)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct tp::wait_t**, sdk::function<void(struct tp::callback_instance_t*, void*, struct tp::wait_t*, uint32_t)>*, void*, struct tp::callback_environ_v3_t*)>*), "$TpAllocWait$ntdll.dll", 0x41b10, 0x0, true, 0xf29f9a93347c9746)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct tp::work_t**, sdk::function<void(struct tp::callback_instance_t*, void*, struct tp::work_t*)>*, void*, struct tp::callback_environ_v3_t*)>*), "$TpAllocWork$ntdll.dll", 0x3e5f0, 0x0, true, 0x1c51f079e4c7f58d)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpAlpcRegisterCompletionList$ntdll.dll", 0x78c00, 0x0, true, 0x61d716ce1cbf95a4)
#define _n6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpAlpcUnregisterCompletionList$ntdll.dll", 0x78cf0, 0x0, true, 0x5106657b374b0cc0)
#define _n7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpBindFileToDirect$ntdll.dll", 0x44508, 0x0, true, 0x15c2561e62d77229)
#define _n8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpCallbackDetectedUnrecoverableError$ntdll.dll", 0x111980, 0x0, true, 0x7dc7677b99ed1553)
#define _n9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpCallbackIndependent$ntdll.dll", 0x63a60, 0x0, true, 0x3dfd095cc58f5c9d)
#define _o0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::callback_instance_t*, struct rtl::critical_section_t*)>*), "$TpCallbackLeaveCriticalSectionOnCompletion$ntdll.dll", 0x876a0, 0x0, true, 0x59ea73e405823fbb)
#define _o1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct tp::callback_instance_t*)>*), "$TpCallbackMayRunLong$ntdll.dll", 0x466d0, 0x0, true, 0xb0fc393575ac8028)
#define _o2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::callback_instance_t*, void*)>*), "$TpCallbackReleaseMutexOnCompletion$ntdll.dll", 0x1119b0, 0x0, true, 0xf79f7c4473e7c763)
#define _o3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::callback_instance_t*, void*, uint32_t)>*), "$TpCallbackReleaseSemaphoreOnCompletion$ntdll.dll", 0x1119f0, 0x0, true, 0x73d5391c6e6bbda4)
#define _o4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpCallbackSendAlpcMessageOnCompletion$ntdll.dll", 0x13700, 0x0, true, 0x2cbe9649db0f8629)
#define _o5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpCallbackSendPendingAlpcMessage$ntdll.dll", 0x111a30, 0x0, true, 0xc8926ffbdacdd8d0)
#define _o6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::callback_instance_t*, void*)>*), "$TpCallbackSetEventOnCompletion$ntdll.dll", 0x84570, 0x0, true, 0x6fe62410ac3769f6)
#define _o7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::callback_instance_t*, void*)>*), "$TpCallbackUnloadDllOnCompletion$ntdll.dll", 0x7c6a0, 0x0, true, 0xa463d761e0d408af)
#define _o8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::io_t*)>*), "$TpCancelAsyncIoOperation$ntdll.dll", 0x43630, 0x0, true, 0xf07f2c85e3ac8db9)
#define _o9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(enum tp::trace_type_t)>*), "$TpCaptureCaller$ntdll.dll", 0x70490, 0x0, true, 0x21bf10ddfd81403c)
#define _p0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(void*)>*), "$TpCheckTerminateWorker$ntdll.dll", 0x4cf50, 0x0, true, 0x576572a7599a40c)
#define _p1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpDbgDumpHeapUsage$ntdll.dll", 0x111a70, 0x0, true, 0xd39fb7e1ed8f5029)
#define _p2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpDbgSetLogRoutine$ntdll.dll", 0x7ede0, 0x0, true, 0xa00d47f19a2ed716)
#define _p3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpDereferenceGlobalPool$ntdll.dll", 0x46688, 0x0, true, 0x9964aec995f1ae50)
#define _p4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpDisablePoolCallbackChecks$ntdll.dll", 0x84520, 0x0, true, 0xbfb3a768e2be6f77)
#define _p5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::callback_instance_t*)>*), "$TpDisassociateCallback$ntdll.dll", 0x7efc0, 0x0, true, 0x888c74a5f5fbf0b2)
#define _p6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpInitializePackage$ntdll.dll", 0x710fc, 0x0, true, 0x9d747887a425df51)
#define _p7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<uint32_t(struct tp::timer_t*)>*), "$TpIsTimerSet$ntdll.dll", 0x3fa60, 0x0, true, 0xbd944fb16b399952)
#define _p8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpPoolReferenceExistingGlobalPool$ntdll.dll", 0x4683c, 0x0, true, 0x62e1ff285fc47b0)
#define _p9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpPostTask$ntdll.dll", 0x20930, 0x0, true, 0xa6d9b1c0cde3bd74)
#define _q0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::work_t*)>*), "$TpPostWork$ntdll.dll", 0x3fcf0, 0x0, true, 0xa802a0b63c341438)
#define _q1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct tp::pool_t*, struct tp::pool_stack_information_t*)>*), "$TpQueryPoolStackInformation$ntdll.dll", 0x111480, 0x0, true, 0xa4820eeedb8f1b08)
#define _q2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::alpc_t*)>*), "$TpReleaseAlpcCompletion$ntdll.dll", 0x78dd0, 0x0, true, 0x64a54c741bada0a)
#define _q3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::cleanup_group_t*)>*), "$TpReleaseCleanupGroup$ntdll.dll", 0x813d0, 0x0, true, 0x4c642858953321fd)
#define _q4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::cleanup_group_t*, uint32_t, void*)>*), "$TpReleaseCleanupGroupMembers$ntdll.dll", 0x675d0, 0x0, true, 0x671a8857122a8f67)
#define _q5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::io_t*)>*), "$TpReleaseIoCompletion$ntdll.dll", 0x7b670, 0x0, true, 0xd5cca5418d48bb07)
#define _q6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpReleaseJobNotification$ntdll.dll", 0x7e0b0, 0x0, true, 0x98eb043e2caf1cd1)
#define _q7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::pool_t*)>*), "$TpReleasePool$ntdll.dll", 0x80c40, 0x0, true, 0xeb2a660ce0450610)
#define _q8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::timer_t*)>*), "$TpReleaseTimer$ntdll.dll", 0x41d50, 0x0, true, 0xf5e1307248ef77c0)
#define _q9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::wait_t*)>*), "$TpReleaseWait$ntdll.dll", 0x42720, 0x0, true, 0xcde2d427d60f0d30)
#define _r0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::work_t*)>*), "$TpReleaseWork$ntdll.dll", 0x40a90, 0x0, true, 0xee7ed97bbdabd2d9)
#define _r1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpReserveTaskPost$ntdll.dll", 0x432b4, 0x0, true, 0x74d9dd28f23f5a9c)
#define _r2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpSetDefaultPoolMaxThreads$ntdll.dll", 0x111540, 0x0, true, 0xf0f9b13053e0003d)
#define _r3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpSetDefaultPoolStackInformation$ntdll.dll", 0x46b60, 0x0, true, 0xbe7c3bdc6f5e23d)
#define _r4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::pool_t*, uint32_t)>*), "$TpSetPoolMaxThreads$ntdll.dll", 0x465c0, 0x0, true, 0xfe99244bc3ba5b44)
#define _r5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpSetPoolMaxThreadsSoftLimit$ntdll.dll", 0x80670, 0x0, true, 0xc7501a290fea3eeb)
#define _r6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct tp::pool_t*, uint32_t)>*), "$TpSetPoolMinThreads$ntdll.dll", 0x82990, 0x0, true, 0xc95b097062e5f722)
#define _r7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct tp::pool_t*, struct tp::pool_stack_information_t*)>*), "$TpSetPoolStackInformation$ntdll.dll", 0x46c80, 0x0, true, 0xeb683486fe88e46d)
#define _r8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpSetPoolThreadBasePriority$ntdll.dll", 0x84850, 0x0, true, 0x2de5a3c8b27d459b)
#define _r9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpSetPoolWorkerThreadIdleTimeout$ntdll.dll", 0x46630, 0x0, true, 0x856729309e271c3a)
#define _s0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::timer_t*, int64_t*, uint32_t, uint32_t)>*), "$TpSetTimer$ntdll.dll", 0x3faf0, 0x0, true, 0xd610b5f806791038)
#define _s1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct tp::timer_t*, int64_t*, uint32_t, uint32_t)>*), "$TpSetTimerEx$ntdll.dll", 0x3fb00, 0x0, true, 0xf8fb67e66eecb87e)
#define _s2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::wait_t*, void*, int64_t*)>*), "$TpSetWait$ntdll.dll", 0x3e8b0, 0x0, true, 0xc0c2c467bb6e2fcf)
#define _s3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(struct tp::wait_t*, void*, int64_t*, void*)>*), "$TpSetWaitEx$ntdll.dll", 0x3f840, 0x0, true, 0x39c684eddfe09203)
#define _s4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<int32_t(sdk::function<void(struct tp::callback_instance_t*, void*)>*, void*, struct tp::callback_environ_v3_t*)>*), "$TpSimpleTryPost$ntdll.dll", 0x3d770, 0x0, true, 0x244a514054f941f0)
#define _s5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::io_t*)>*), "$TpStartAsyncIoOperation$ntdll.dll", 0x3fc10, 0x0, true, 0xe59057a06312c02e)
#define _s6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpTimerOutstandingCallbackCount$ntdll.dll", 0x43ee0, 0x0, true, 0x10d3ab210c294401)
#define _s7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpTrimPools$ntdll.dll", 0x64c20, 0x0, true, 0xa84ea3fed2b57991)
#define _s8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpUnreserveTaskPost$ntdll.dll", 0x43334, 0x0, true, 0x93a595d4beefc69c)
#define _s9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::alpc_t*)>*), "$TpWaitForAlpcCompletion$ntdll.dll", 0x78d30, 0x0, true, 0x91af1dbbed51896b)
#define _t0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::io_t*, uint32_t)>*), "$TpWaitForIoCompletion$ntdll.dll", 0x83ea0, 0x0, true, 0xe2fef480f92ca260)
#define _t1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpWaitForJobNotification$ntdll.dll", 0x7e070, 0x0, true, 0xfde9ba10bbcfef6f)
#define _t2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::timer_t*, uint32_t)>*), "$TpWaitForTimer$ntdll.dll", 0x3f4e0, 0x0, true, 0x59e3dd1338964218)
#define _t3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::wait_t*, uint32_t)>*), "$TpWaitForWait$ntdll.dll", 0x436a0, 0x0, true, 0x50c7148b60b084df)
#define _t4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::function<void(struct tp::work_t*, uint32_t)>*), "$TpWaitForWork$ntdll.dll", 0x7dcd0, 0x0, true, 0xbffc0320a16f5365)
#define _t5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$TpWaitOutstandingCallbackCount$ntdll.dll", 0x43490, 0x0, true, 0xb2d5112b314f6d89)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#define _n4(...) __VA_ARGS__
#define _n5(...) __VA_ARGS__
#define _n6(...) __VA_ARGS__
#define _n7(...) __VA_ARGS__
#define _n8(...) __VA_ARGS__
#define _n9(...) __VA_ARGS__
#define _o0(...) __VA_ARGS__
#define _o1(...) __VA_ARGS__
#define _o2(...) __VA_ARGS__
#define _o3(...) __VA_ARGS__
#define _o4(...) __VA_ARGS__
#define _o5(...) __VA_ARGS__
#define _o6(...) __VA_ARGS__
#define _o7(...) __VA_ARGS__
#define _o8(...) __VA_ARGS__
#define _o9(...) __VA_ARGS__
#define _p0(...) __VA_ARGS__
#define _p1(...) __VA_ARGS__
#define _p2(...) __VA_ARGS__
#define _p3(...) __VA_ARGS__
#define _p4(...) __VA_ARGS__
#define _p5(...) __VA_ARGS__
#define _p6(...) __VA_ARGS__
#define _p7(...) __VA_ARGS__
#define _p8(...) __VA_ARGS__
#define _p9(...) __VA_ARGS__
#define _q0(...) __VA_ARGS__
#define _q1(...) __VA_ARGS__
#define _q2(...) __VA_ARGS__
#define _q3(...) __VA_ARGS__
#define _q4(...) __VA_ARGS__
#define _q5(...) __VA_ARGS__
#define _q6(...) __VA_ARGS__
#define _q7(...) __VA_ARGS__
#define _q8(...) __VA_ARGS__
#define _q9(...) __VA_ARGS__
#define _r0(...) __VA_ARGS__
#define _r1(...) __VA_ARGS__
#define _r2(...) __VA_ARGS__
#define _r3(...) __VA_ARGS__
#define _r4(...) __VA_ARGS__
#define _r5(...) __VA_ARGS__
#define _r6(...) __VA_ARGS__
#define _r7(...) __VA_ARGS__
#define _r8(...) __VA_ARGS__
#define _r9(...) __VA_ARGS__
#define _s0(...) __VA_ARGS__
#define _s1(...) __VA_ARGS__
#define _s2(...) __VA_ARGS__
#define _s3(...) __VA_ARGS__
#define _s4(...) __VA_ARGS__
#define _s5(...) __VA_ARGS__
#define _s6(...) __VA_ARGS__
#define _s7(...) __VA_ARGS__
#define _s8(...) __VA_ARGS__
#define _s9(...) __VA_ARGS__
#define _t0(...) __VA_ARGS__
#define _t1(...) __VA_ARGS__
#define _t2(...) __VA_ARGS__
#define _t3(...) __VA_ARGS__
#define _t4(...) __VA_ARGS__
#define _t5(...) __VA_ARGS__
#endif