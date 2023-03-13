* [x] Choose a GPU coding framework.
    * Use SyCL (decision)
* Create an intermediate DSL for operations. (symbolic: `slice axis[0] ⟶ hist[5d]:eq1` where `eq1` is a binning-strategy with equal bins
    * [ ] A first PoC simple
* [ ] vectrorized claculations (?) ( a continuation of the DSL one?)
* [ ] Export SyCL but also other onces (e.g. OpenMP)
* [ ] Also utilise something like Open MPI (distributed) and not just OpenMP/SyCL.
* [ ] Choose a good job scheduling package.
* [ ] Choose a good DSL tool
* [ ] Choose a good data server tool (Separate computers):
    * Decision: HDS. Accept?
