
A few ideas:

A GPU code that counts some of the bins. The sum of these should do the whole.

Very small number of them (fixed number), doable on a large number of GPUs, no need for global (or even shared) memory access.

How to pipe these? (while incomplete)
