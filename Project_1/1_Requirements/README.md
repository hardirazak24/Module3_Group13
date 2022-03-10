# Description

Remote keyless entry (RKE) system is a system designed to remotely lock or unlock access to automobiles. 
- RKE transmission requires two components: a transmitter and a receiver. 
  - Transmitter - RKE key fob, other ID device with RKE integrated 
  -	Receiver - Body Control ECU, other ECU with integrated RKE 
-	 RKE operates by broadcasting radio waves on a particular frequency unidirectionally. 
-	RKE systems implement encryption and rolling code algorithms to prevent car thieves from intercepting and spoofing the telegrams. 


# Detail requirements
## High Level Requirements:
| ID | Description | Category | Status |
| --- | --- | --- | --- |
| HLR01 |It shall check for encryption   | Technical | IMPLEMENTED  |
| HLR02 |It shall lock the door  | Technical |  IMPLEMENTED |
| HLR03 |It shall unlock the door  | Technical |  IMPLEMENTED |
| HLR04 |It shall activate/deactivate the alarm  | Technical | IMPLEMENTED  |
| HLR05 |It shall approach the light  | Technical | IMPLEMENTED  |

## Low level Requirements:
| ID | Description | HLR ID | Status |
| --- | --- | --- | --- |
| LLR01 | It should check 2+3=5  | HLR01 | IMPLEMENTED  |
| LLR02 | The Blue switch should turn ON |HLR02  |  IMPLEMENTED |
| LLR03 | The Blue switch must be pressed two times | HLR03 |  IMPLEMENTED |
| LLR04 | The Blue switch must be pressed three times | HLR04 | IMPLEMENTED  |
| LLR05 | The Blue switch must be pressed four times | HLR05 | IMPLEMENTED  |

# SWOT Analysis

# 5W's and 1H
