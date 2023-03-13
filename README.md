tropy1
======

test

I forgot the original plan. I think it was FPGA (or/+ Haskell). + Choose per-row or per-column etc.

The new plan: GPU / SIMD / OpenMP.

(With HDS data sources. + Job system. But this would be a seaparte project, or use an open-source one)

Multiple ports.
(Maybe a DSL?)

It matters if one can do entropy entimatins in a performant way.
Applications:
* Esitmations (MM2007, including shuffling)
* Model selection (exhaustive explxoration + GIL-tracing)
* Model (simp) engineering: (Markov-Blanket engineering).

Choice? Probbaly SYCL.
