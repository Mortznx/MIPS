# 5-Stage Pipelined MIPS Processor

A modular implementation of a **5-stage pipelined MIPS processor** written in **Verilog HDL**. This project demonstrates the design of a pipelined CPU with hazard handling mechanisms, modular hardware architecture, and functional simulation.

---

## Features

- 5-stage pipeline architecture
  - Instruction Fetch (IF)
  - Instruction Decode (ID)
  - Execute (EX)
  - Memory Access (MEM)
  - Write Back (WB)

- Modular hardware design

- Pipeline registers
  - IF/ID
  - ID/EX
  - EX/MEM
  - MEM/WB

- Hazard Detection Unit

- Forwarding Unit

- Data Hazard Handling

- Branch and Jump instruction support

- Custom-designed hardware components
  - 32 × 32-bit Register File
  - Arithmetic Logic Unit (ALU)
  - Instruction Memory
  - Data Memory

---

## Supported Instructions

The processor supports a subset of the MIPS instruction set, including arithmetic, logical, memory access, branch, and jump instructions.

Examples include:

- add
- sub
- and
- or
- lw
- sw
- beq
- j

---

## Project Structure

```text
project/
    MIPS.xise

src/
    Common/
    Controller-and-hazard/
    IF/
    ID/
    EX/
    MEM/
    WB/
    top/

TestBench/
    test.v
    program.mem
```

---

## Simulation

The processor is designed for **functional simulation** using **Verilog HDL**.

This repository focuses on processor architecture and digital design rather than FPGA implementation.

---

## Technologies

- Verilog HDL
- Xilinx ISE
- ISim Simulator

---

## Author

**Morteza Nazari**

Computer Engineering Student

Interested in Digital Design, Computer Architecture, FPGA, and Hardware Design.
