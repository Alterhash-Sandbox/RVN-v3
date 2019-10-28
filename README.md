by Buzzdave, Oct 23, 2019

What is RVN v3?  I thought they just forked to v2?
----------------

RVN v3 is a testnet fork of the main Ravencoin code.

The primary goal of this repo is to create a sandbox to introduce and field-test a more ASIC resistant concept of EI (Economic Infeasibility) and to get community support for a 2nd and final fork of Ravencoin to a mining algorithm that we (the community) believe is suitably resistant to the constant attack of ASIC miners.  Since FPGAs are typically the engineering precursors to ASICs, an algorithm that is highly compute oriented and feasible on FPGA tends to be highly feasible on ASIC.  Until now.  With the advent of HBM (High Bandwidth Memory), FPGA and GPU can both take advantage of memory bound algorithms to provide POW hashing for a blockchain.  Both FPGA and GPU are capable of significant compute outside of hashing, and in some case can provide the computing without interrupting the mining process.

The more GPUs and FPGAs out in the world, the better.  They can be used for other types of computing, and those people who choose to opt-in by dedicating their hardware to this project will know that they won't find themselves holding useless hardware in the future.

License
-------

RVN Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

This coin is a development sandbox.  It is not stable, nor are there releases available yet.  ***IT WILL BE RESET FREQUENTLY***

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md).



Testing
-------

Testnet is planned, but not running.

Main Net
-------

No MainNet is ever planned, so don't mine this coin thinking it will be anything other than a testbed for a future Ravecoin consensus fork.


Abstract
----------------
Many POW (Proof of Work, i.e. mineable) blockchains attempt to keep their 
network free of ASICs by designing complications into the algorithms that are difficult to engineer
into dedicated silicon.  Some great work has been done by ProgPOW and RandomX developers, each in turn specializing for CPU and GPU.  To read more
about their approaches to ASIC resistance, go to https://github.com/ifdefelse/ProgPOW and https://github.com/tevador/RandomX.

ASICs (Application Specific Integrated Circuits) can be very powerful at hashing and very cheap to produce.
This has been shown to create some difficult dynamics for many ecosystems.  51% attacks, only dreamed of when bitcoin first got its start, have been utilized to steal from exchanges and destroy upstart blockchains. Centralization of hashing power,
pooling and mass manufacturing of high powered ASIC miners puts network consensus at risk.  To read more about the
negative effects of ASICs on a POW blockchain, go to https://github.com/ifdefelse/ProgPOW#rationale-for-pow-on-commodity-hardware

This project seeks to create and explore the ASIC Resistance concept of Economic Infeasibility.  EI Resistance asserts that, based on the number and size of the algorithms used in the POW protocol, we can force an arbitrarily high cost of design
and manufacturing risk in an ASIC attempt.  EI doesn't try to produce algorithms that are too difficult to replicate in ASIC,
it simply arranges and orders them in such a way that an ASIC would be too expensive to justify producing until the
network were to achieve a arbitrarily high market cap.

It can also be asserted that once a certain market cap has been achieved, the network will have grown to sufficient size
as to not suffer the worst of the negative effects of ASICs.  This project hopes to promote the widespread deployment of 
high performance GPU and FPGA cards (Field Programmable Gate Arrays are basically programmable chips).

