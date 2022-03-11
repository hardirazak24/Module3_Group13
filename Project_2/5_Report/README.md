# Description

* Bicom system: A BiCom system is the extention of the unidirectional RKE to bidirectional RKE system.
* keyfob -> car (like a unidirectional RKE system) -> keyfob (car status information for displaying on the keyfob by  display). 
* Displaying of the car window status is implemented in this project by showing all LED on on a single click on the STM32f407vg board and alarm status is shown by all LED off on
  two clicks on the board. Displaying of car battery info is implemented in this project by showing all LED on in clockwise direction on three clicks and door status is shown by
  all LED on in anti-clockwise direction on four clicks on the STM board.

# Detail requirements
## High Level Requirements:
| ID | Description | Category | Status |
| --- | --- | --- | --- |
| HLR01 |It shall check for encryption  | Technical | IMPLEMENTED  |
| HLR02 | It shall print the window status | Technical |  IMPLEMENTED |
| HLR03 | It shall print the alarm status | Technical |  IMPLEMENTED |
| HLR04 | It shall print the battery information | Technical | IMPLEMENTED  |
| HLR05 | It shall print the door status | Technical | IMPLEMENTED  |

## Low level Requirements:
| ID | Description | HLR ID | Status |
| --- | --- | --- | --- |
| LLR01 | To check if 2+3=5 | HR01  | IMPLEMENTED  |
| LLR02 | The Blue switch should turn ON | HR02 |  IMPLEMENTED |
| LLR03 | The Blue switch must be pressed two times  | HR03 |  IMPLEMENTED |
| LLR04 | The Blue switch must be pressed three times | HR04 | IMPLEMENTED  |
| LLR05 | The Blue switch must be pressed four times | HR05 | IMPLEMENTED  |

# SWOT Analysis

![Screenshot (292)](https://user-images.githubusercontent.com/42509490/157890123-973f89c5-c917-4acc-a0fc-30f924fd807e.png)

# 5W's and 1H

![Screenshot (293)](https://user-images.githubusercontent.com/42509490/157894011-c2e0d5e4-c2b9-4d57-9d15-df6977a8cec7.png)


# Architecture

## Behavioural Diagram

### High Level Flow chart

![High Level Flow chart Behavioural Diagram](https://user-images.githubusercontent.com/99074356/157879695-4f926b8b-1684-4459-82cc-f3a9815a764e.png)

### Low Level Flow chart

![Low Level Flow chart Behavioural Diagram](https://user-images.githubusercontent.com/99074356/157879713-5424e0ed-058b-487f-acc3-c9a716192791.png)

## Structural Diagram

![Structural Diagram](https://user-images.githubusercontent.com/99074356/157879758-b8470731-3e7d-42bf-9250-8da8a75c9f76.png)


