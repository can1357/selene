# selene

[Hypervisor detection methods](https://github.com/can1357/hvdetecc/) I released yesterday were dependent on a bunch of parts of this project, as well as my recent Patchguard bypass post, so I just decided to go for the whole thing.

This is a very interesting repository including:
- Runtime patchguard bypass working for all Windows versions `/selene/misc/nopg`
- A fully featured GDB and Cheat Engine server, intended to be used in a baremetal OS `/selene/gdb`
- A paravirtualization engine that can sandbox arbitrary kernel-mode drivers in the **magical Ring 2** as well as processes under Windows `/selene/su`
- A microkernel with APIC scheduling, memory management mirroring a guest OS, raw TCP/IP hooking into NDIS `/selene`
- An execution tracing engine that can generate a full call graph containing privileged instructions during the runtime with a < 100ns overhead `/selene/su/xt` & `/xt`
- A Lua scriptable pattern scanning engine that can JIT codegen from snippets of assembly, as well as emulate basic x86 `/flash`
- PDB parsing library that can generate C++ headers which can be magically updated during runtime or build time without recompilation `/pdblib` and `/sdkgen`
- C++ wrapper around the NT kernel APIs (syscalls in User-Mode, reimplementation in Kernel-Mode), with many helpers including an Authenticode implementation `/shared/ntpp`
- A linker written from scratch that accepts LLVM bitcode and generates PE images w/ full-LTO support, implementing: (`/apollo`)
  - MBA obfuscation
  - WASM based virtualization
  - Basic block splitting
  - Custom line-information tables
  - Automatic string encryption
  - Automatic lifting of imports into lazy-imports
  - Automatic lifting of Syscall imports into syscall stubs
  - Profiler instrumentations with Chrome-Flamegraph compatible profile writer that can be used anywhere including baremetal kernel-mode
  - VS2022 integration!
- Mitigations against TSX side-channels using a novel method involving PMCs `/selene/su/mitigations`
- Kernel-mode Sentry-compatible crashdumps as well as networked submission on BSOD `/shared/trace_snapshot` & `/selene/misc/crashdump`
- And some other stuff I'm completely forgetting about


## Notes

Most of this will probably not work out of the box, but I'm working on it as I have free time.
Kernel-Mode parts will require you to provide a C runtime implementation, which I unfortunately cannot share due to not being the sole legal license holder.

You will need to set the SeleneRoot environment variable to the root of the project, as well as CxxLibraries to where it can find the dependencies:
- LLVM 18 or greater
- [xstd](https://github.com/can1357/xstd)
- [linux-pe](https://github.com/can1357/linux-pe)
- [xed++](https://github.com/can1357/xedpp)
- [ulua](https://github.com/can1357/ulua) for flash scripting
- [rpmalloc](https://github.com/mjansson/rpmalloc) to be used as the kernel-mode allocator (A fork of it for kernel-mode can be found [here](https://github.com/can1357/rpmalloc), but you can also fix up the original repo)
- [XED](https://github.com/intelxed/xed) for disassembly
- [LWIP](https://savannah.nongnu.org/projects/lwip) for NDIS-less networking ([Forked version](https://github.com/can1357/lwip-fork))
- [zstd](https://github.com/facebook/zstd) if you want the custom `zcompressed` attribute
