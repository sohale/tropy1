
A few ideas:

A GPU code that counts some of the bins. The sum of these should do the whole.

Very small number of them (fixed number: `SmallM`), doable on a large number of GPUs, no need for global (or even shared) memory access.

How to pipe these? (while incomplete)

Try different lengths of small bins (`SmallM`) and compare speed.

A language where krnels are across network (not resolved until the very end, maybe). Result collectors (end2end only).
