# 1. RKE (Remote Keyless Entry)
## 1.1 Description

* RKE : The system is designed to remotely lock or unlock access to automobiles. The transmission between the remote and automobile is achieved with two components which is a
  transmitter and a receiver.
* Transmitter - RKE key fob, other ID device with RKE integrated.
* Receiver - Body Control ECU, other ECU with integrated RKE.
* This system consists of features to lock and unlock the automobile which operates by broadcasting radio waves on a particular frequency unidirectionally, implementation of
 lock feature is shown by LED on on single click and unlock is show by LED off on two clicks on the STM32f407vg board. It also consists feature of activation/deactivation of
 alarm which is implemented in project showing LED glow rotating in clockwise direction and a feature of approach light is shown by LED glow rotating in anticlockwise
 direction. This systems implements encryption and rolling code algorithms to prevent car thieves from intercepting and spoofing the telegrams.
 
 ## 1.2 Identifying features
 * When we press the push button one time it shall lock the car
 * When we press the push button two times it shall unlock the car
 * When we press the push button three times it shall activate/deactivate the alarm of the car
 * When we press the push button four times it shall activate approach light of the car
 
## 1.3 SWOT Analysis
![Screenshot (290)](https://user-images.githubusercontent.com/42509490/157887187-50203b2a-9b3b-47b3-b0a3-6ca995c5ee9c.png)


# 1.4 5W's and 1H
![Screenshot (291)](https://user-images.githubusercontent.com/42509490/157888448-a0c8f382-ac60-4f15-9e9b-99c514e4278a.png)

# 2. Detail requirements
## 2.1 High Level Requirements:
| ID | Description | Category | Status |
| --- | --- | --- | --- |
| HLR01 |It shall check for encryption   | Technical | IMPLEMENTED  |
| HLR02 |It shall lock the door  | Technical |  IMPLEMENTED |
| HLR03 |It shall unlock the door  | Technical |  IMPLEMENTED |
| HLR04 |It shall activate/deactivate the alarm  | Technical | IMPLEMENTED  |
| HLR05 |It shall approach the light  | Technical | IMPLEMENTED  |

## 2.2 Low level Requirements:
| ID | Description | HLR ID | Status |
| --- | --- | --- | --- |
| LLR01 | It should check 2+3=5  | HLR01 | IMPLEMENTED  |
| LLR02 | The Blue switch should turn ON |HLR02  |  IMPLEMENTED |
| LLR03 | The Blue switch must be pressed two times | HLR03 |  IMPLEMENTED |
| LLR04 | The Blue switch must be pressed three times | HLR04 | IMPLEMENTED  |
| LLR05 | The Blue switch must be pressed four times | HLR05 | IMPLEMENTED  |

# Architecture

## Behavioural Diagram

### High Level Flow chart

![High Level Flow chart Behavioural Diagram](https://user-images.githubusercontent.com/99074356/157875988-3887bde8-26e9-4795-9af2-9487461d25cd.png)

### Low Level Flow chart

![low level](https://user-images.githubusercontent.com/99074356/157880413-cfc8938c-39b8-467d-bb46-bc1bc2cac16d.png)

## Structural Diagram

![Structural Diagram](https://user-images.githubusercontent.com/99074356/157876946-803597e4-c43c-4550-b67e-6cac4b82f3f1.png)

# Test Plan

| Test ID |	Test Case Objective	| Input Data |	Excepted Output |	Actual Output|
|---------|---------------------|------------|------------------|--------------|
| TC_01 |	For encryption |	If 2+5=7 |	X=7	| X=7	|
| TC_02 |	To lock	| Blue switch ON	| Print "lock" <br/> All led ON at the same time	|  Print "lock" <br/> All led ON at the same time	|
| TC_03 |	To unlock	| Press blue switch two times |	Print "unlock" <br/> All led OFF at the same time | Print "unlock" <br/>	All led OFF at the same time |
| TC_04	| Alarm activation/deactivation | Press blue switch three times |	Print "alarm activate/deactivate" <br/> All led ON in clockwise manner |Print "alarm activate/deactivate" <br/> All led ON in clockwise manner |
| TC_05 |	Light approach | 	Press blue switch four times | Print "approach light" <br/> Print All led ON in anti-clockwise manner	| Print "approach light" <br/> All led ON in anti-clockwise manner	|

