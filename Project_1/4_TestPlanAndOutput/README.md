# Test Plan

| Test ID |	Test Case Objective	| Input Data |	Excepted Output |	Actual Output|
|---------|---------------------|------------|------------------|--------------|
| TC_01 |	For encryption |	If 2+5=7 |	X=7	| X=7	|
| TC_02 |	To lock	| Blue switch ON	| Print "lock" <br/> All led ON at the same time	|  Print "lock" <br/> All led ON at the same time	|
| TC_03 |	To unlock	| Press blue switch two times |	Print "unlock" <br/> All led OFF at the same time | Print "unlock" <br/>	All led OFF at the same time |
| TC_04	| Alarm activation/deactivation | Press blue switch three times |	Print "alarm activate/deactivate" <br/> All led ON in clockwise manner |Print "alarm activate/deactivate" <br/> All led ON in clockwise manner |
| TC_05 |	Light approach | 	Press blue switch four times | Print "approach light" <br/> Print All led ON in anti-clockwise manner	| Print "approach light" <br/> All led ON in anti-clockwise manner	|

