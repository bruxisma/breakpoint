# Overview

This is an implementation of [P1279] for WG21 (ISO C++). It currently only
works on Windows and macOS for the amd64 architecture.

Use of it is simple. Call `ixm::breakpoint()` anywhere within your code and
you're all set. This implementation is *not* header only. Use FetchContent to
acquire it as a subproject if necessary.


[P1279]: https://wg21.link/p1279
