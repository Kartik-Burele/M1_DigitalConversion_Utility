# Report
## Table of contents
1. [Introduction](#Introduction)
2. [SWOT analysis](#swot)
3. [4W's and 1H](#4w1h)
4. [Requirements](#Requirements)
5. [Architecture](#architecture)
6. [Test plan](#testplan)
 
# Requirements

# Introduction: <a name="Introduction"></a>

There are various number systems in digital electronics. Most common of them are decimal, binary, octal and hexadecimal. In this project the user will be able to convert a decimal number into other three number systems in few seconds.
***
# Features:
This system supports following types of data conversions (For positive integers): 
| FROM | TO | TYPE |
|:---:|:---:|:---:|
| Decimal | Binary | Number system with base 2 |
| Decimal | Octal | Number system with base 8 |
| Decimal | Hexadecimal | Number system with base 16 |
***
# Defining Our System
![Research_digital_conversion drawio](https://user-images.githubusercontent.com/98891749/153233462-865154bd-0b12-4cb6-800f-655b22ea39b8.png)
***
# Research:
![Table of digital conversion](https://user-images.githubusercontent.com/98891749/153230373-0faf5e9f-d927-46d8-806e-7e127da56b71.png)
**Examples:**
| Decimal |	Binary | Octal	| Hexadecimal|
|:---:|:---:|:---:|:---:|
|0	|0000|	0|	0|
|1	|0001|	1|	1|
|2	|0010|	2|	2|
|3	|0011|	3| 3|
|4	|0100|	4| 4|
|5	|0101|	5| 5|
|6	|0110|	6| 6|
|7	|0111|	7|	7|
|8	|1000|	10|	8|
|9	|1001|	11|	9|
|10	|1010|	12|	A|
|11	|1011|	13|	B|
|12	|1100|	14|	C|
|13	|1101|	15|	D|
|14	|1110|	16|	E|
|15	|1111|	17|	F|
***
# SWOT Analysis:<a name="swot"></a>
![SWOT M1](https://user-images.githubusercontent.com/98891749/156187567-a90bd956-3b99-4511-b226-c16ab3e34541.png)

***
# 4W's and 1H<a name="4w1h"></a>
![4W1H Model M1](https://user-images.githubusercontent.com/98891749/156187673-247b4ed8-86fe-4ac6-9d18-b62f3bf63247.png)
***

# Detail requirements<a name="Requirements"></a>
## High Level Requirements
| ID | Description | Status (Implemented/Future)|
|:---:|:---:|:---:|
|HLR-1| User shall be able to convert data from decimal system to another |Implemented|
|HLR-2| System output must display data without any error |Implemented|
|HLR-3| User shall be able to convert data between any number systems|Future|
|HLR-4| User shall be able to convert a negative data value|Future|
***
##  Low level Requirements
| ID | Description | Status (Implemented/Future)|
|:---:|:---:|:---:|
|LLR-1_1|User shall be able to convert the decimal number into binary|Implemented|
|LLR-1_2|User shall be able to convert the decimal number into octal|Implemented|
|LLR-1_3|User shall be able to convert the decimal number into hexadecimal|Implemented|
|LLR_2_1|User shall get correct output|Implemented|
***
# Architecture<a name="architecture"></a>

## Tools 
* [Draw.io](https://app.diagrams.net/)
## Usecase behavioural diagram (HLR)
![Usecase_digital_conversion drawio](https://user-images.githubusercontent.com/98891749/153247496-7591a5ea-ab5d-42ed-810c-cb6011e7efdf.png)

## Activity behavioural diagram (HLR)
![Activity_digital_conversion drawio](https://user-images.githubusercontent.com/98891749/153247547-cfd35381-9101-4c36-8606-be856c1eeb97.png)

## Component structural diagram (HLR)
![Component_digital_conversion drawio](https://user-images.githubusercontent.com/98891749/153247604-057aeb0d-2bb7-4071-93e2-274e35d79591.png)
***
# Test plan<a name="testplan"></a>
# High Level test plan

| Test_ID | Description | Status |
|:---:|:---:|:---:|
| H_1 | User shall be able to convert data from decimal system to another | PASS |
| H_2 | System output must display data without any error | PASS |

# Low Level test plan

| Test_ID | HLT_ID | Description | Status |
|:---:|:---:|:---:|:---:|
| L_1 | H_1 | User shall be able to convert the decimal number into binary| PASS |
| L-2 | H_1 | User shall be able to convert the decimal number into octal| PASS |
| L-3 | H_1 | User shall be able to convert the decimal number into hexadecimal | PASS |
| L-4 | H_2 | User shall get correct output  | PASS |
