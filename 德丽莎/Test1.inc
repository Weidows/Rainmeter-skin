[Rainmeter]
Update=90
AccurateText=1

[Metadata]
Name=德莉莎
Author=会飞的呱太
Version=1.00

OnRefreshAction=[!HideMeter bitmap][!DisableMeasure mFrames][!Redraw]

;======================== Image =======================

[ImageStyle]
MeasureName=#CurrentSection#Calc
X=100
W=150
Hidden=1

;======================== 表情 ========================
[Image01]
Meter=Image
ImageName=bitmaps\guatai\[mRandom1].png
MeterStyle=ImageStyle
DynamicVariables=1
x=135
y=15
w=50

;======================== 动作 =======================
[Image0]
Meter=Image
ImageName=bitmaps\guatai\对话框.png
MeterStyle=ImageStyle
x=225
y=91
w=113

[Image1]
Meter=Image
ImagePath=bitmaps\0
MeterStyle=ImageStyle
Hidden=0
LeftMouseUpAction=[!HideMeter Image1][!DisableMeasure Image1Calc][!EnableMeasure mFrames][!ShowMeter bitmap][!UpdateMeasure mRandom][!UpdateMeasure mRandom1][!EnableMeasure C0][play "bitmaps\yxiao\[mRandom][mRandom1].wav"][!Redraw]
MiddleMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter Image0][!ShowMeter Text1][!ShowMeter Text2]

[Image2]
Meter=Image
ImagePath=bitmaps\1
MeterStyle=ImageStyle
LeftMouseUpAction=[!HideMeter Image2][!DisableMeasure Image2Calc][!ShowMeter Image5][!EnableMeasure Image5Calc][!EnableMeasure C3][!UpdateMeasure mRandom1][play "bitmaps\yxiao\1[mRandom1].wav"][!Redraw]
MiddleMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter Image0][!ShowMeter Text1][!ShowMeter Text2]

[Image3]
Meter=Image
ImagePath=bitmaps\2
MeterStyle=ImageStyle

[Image4]
Meter=Image
ImagePath=bitmaps\3
MeterStyle=ImageStyle

[Image5]
Meter=Image
ImagePath=bitmaps\4
MeterStyle=ImageStyle

[Image6]
Meter=Image
ImagePath=bitmaps\5
MeterStyle=ImageStyle
x=72
y=31
w=210

[Image7]
Meter=Image
ImagePath=bitmaps\6
MeterStyle=ImageStyle
LeftMouseUpAction=[!HideMeter Image7][!DisableMeasure Image7Calc][!ShowMeter Image9][!EnableMeasure Image9Calc][!EnableMeasure C6][!UpdateMeasure mRandom1][play "bitmaps\yxiao\2[mRandom1].wav"][!Redraw]
MiddleMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter Image0][!ShowMeter Text1][!ShowMeter Text2]
x=72
y=31
w=210

[Image8]
Meter=Image
ImagePath=bitmaps\7
MeterStyle=ImageStyle
x=72
y=31
w=210

[Image9]
Meter=Image
ImagePath=bitmaps\8
MeterStyle=ImageStyle
x=72
y=31
w=210

[Image10]
Meter=Image
ImagePath=bitmaps\9
MeterStyle=ImageStyle
x=93
y=7
w=148

[Image11]
Meter=Image
ImagePath=bitmaps\10
MeterStyle=ImageStyle
LeftMouseUpAction=[!EnableMeasure C9][!UpdateMeasure mRandom1][play "bitmaps\yxiao\3[mRandom1].wav"][!Redraw][!ShowMeter Image01]
MiddleMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter Image0][!ShowMeter Text1][!ShowMeter Text2]
x=93
y=7
w=148

[Image12]
Meter=Image
ImagePath=bitmaps\11
MeterStyle=ImageStyle
x=93
y=7
w=148

[Image13]
Meter=Image
ImagePath=bitmaps\12
MeterStyle=ImageStyle
x=92
y=4
w=158

[Image14]
Meter=Image
ImagePath=bitmaps\13
LeftMouseUpAction=[!HideMeter Image14][!DisableMeasure Image14Calc][!ShowMeter Image16][!EnableMeasure Image16Calc][!EnableMeasure C12][!UpdateMeasure mRandom1][play "bitmaps\yxiao\4[mRandom1].wav"][!Redraw]
MiddleMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter Image0][!ShowMeter Text1][!ShowMeter Text2]
MeterStyle=ImageStyle
x=92
y=4
w=158

[Image15]
Meter=Image
ImagePath=bitmaps\14
MeterStyle=ImageStyle
x=92
y=4
w=158

[Image16]
Meter=Image
ImagePath=bitmaps\15
MeterStyle=ImageStyle
x=92
y=4
w=158


;======================== ImageCalc =======================

[Image1Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%16

[Image2Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%19
Disabled=1

[Image3Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%32
Disabled=1

[Image4Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%20
Disabled=1

[Image5Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%21
Disabled=1

[Image6Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%16
Disabled=1

[Image7Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%26
Disabled=1

[Image8Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%14
Disabled=1

[Image9Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%15
Disabled=1

[Image10Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%12
Disabled=1

[Image11Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%20
Disabled=1

[Image12Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%12
Disabled=1

[Image13Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%10
Disabled=1

[Image14Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%20
Disabled=1

[Image15Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%10
Disabled=1

[Image16Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%4
Disabled=1

;========================= Image Random =======================

[mRandom]
Measure=Calc
Formula=Random
LowBound=100
HighBound=105
UpdateRandom=1
UniqueRandom=1
DynamicVariables=1
UpdateDivider=-1

[mRandom1]
Measure=Calc
Formula=Random
LowBound=1
HighBound=5
UpdateRandom=1
UniqueRandom=1
DynamicVariables=1
UpdateDivider=-1

OnUpdateAction=[!SetOption bitmap AntiAlias 1][!UpdateMeter bitmap][!Redraw]

[mFrames]
Measure=Calc
Formula=(#CurrentSection#+1)%27
Disabled=1

[bitmap]
Meter=Image
ImagePath=bitmaps\[mRandom]
MeasureName=mFrames
AntiAlias=1
x=100
h=230
Hidden=1

;======================== Control =======================
[M]
Measure=Time
Format=%M
[S]
Measure=Time
Format=%S

[T1]
Measure=Calc
Formula=M*100+S
IfCondition=(T1 = 0001) || (T1 = 1201) || (T1 = 3601)
IfTrueAction=[!HideMeter Image1][!DisableMeasure Image1Calc][!ShowMeter Image3][!EnableMeasure Image3Calc][!EnableMeasure C1][!EnableMeasure T2][!Redraw]

IfCondition2=(T1 = 2401) || (T1 = 5401)
IfTrueAction2=[!HideMeter Image1][!DisableMeasure Image1Calc][!ShowMeter Image6][!EnableMeasure Image6Calc][!EnableMeasure C4][!EnableMeasure T2][!Redraw]

IfCondition3=(T1 = 0601) || (T1 = 3001) || (T1 = 4201)
IfTrueAction3=[!HideMeter Image1][!DisableMeasure Image1Calc][!ShowMeter Image10][!EnableMeasure Image10Calc][!EnableMeasure C7][!EnableMeasure T2][!Redraw]

IfCondition4=(T1 = 1801) || (T1 = 4801)
IfTrueAction4=[!HideMeter Image1][!DisableMeasure Image1Calc][!ShowMeter Image13][!EnableMeasure Image13Calc][!EnableMeasure C10][!EnableMeasure T2][!Redraw]

[T2]
Measure=Calc
Formula=M*100+S
Disabled=1
IfCondition=(T1 = 0301) || (T1 = 1501) || (T1 = 3901)
IfTrueAction=[!HideMeter Image2][!DisableMeasure Image2Calc][!ShowMeter Image4][!EnableMeasure Image4Calc][!EnableMeasure C2][!DisableMeasure T2][!Redraw]

IfCondition2=(T1 = 2701) || (T1 = 5701)
IfTrueAction2=[!HideMeter Image7][!DisableMeasure Image7Calc][!ShowMeter Image8][!EnableMeasure Image8Calc][!EnableMeasure C5][!DisableMeasure T2][!Redraw]

IfCondition3=(T1 = 0901) || (T1 = 3301) || (T1 = 4501)
IfTrueAction3=[!HideMeter Image11][!DisableMeasure Image11Calc][!ShowMeter Image12][!EnableMeasure Image12Calc][!EnableMeasure C8][!DisableMeasure T2][!Redraw]

IfCondition4=(T1 = 2101) || (T1 = 5101)
IfTrueAction4=[!HideMeter Image14][!DisableMeasure Image14Calc][!ShowMeter Image15][!EnableMeasure Image15Calc][!EnableMeasure C11][!DisableMeasure T2][!Redraw]

[C0]
Measure=Calc
Formula=C0+1
Disabled=1
IfEqualValue=27
IfEqualAction=[!HideMeter bitmap][!DisableMeasure mFrames][!ShowMeter Image1][!EnableMeasure Image1Calc][!DisableMeasure C0][!Redraw][!DisableMeasure mFrames]

[C1]
Measure=Calc
Formula=C1+1
Disabled=1
IfEqualValue=32
IfEqualAction=[!HideMeter Image3][!DisableMeasure Image3Calc][!ShowMeter Image2][!EnableMeasure Image2Calc][!DisableMeasure C1][!Redraw]

[C2]
Measure=Calc
Formula=C2+1
Disabled=1
IfEqualValue=20
IfEqualAction=[!HideMeter Image4][!DisableMeasure Image4Calc][!ShowMeter Image1][!EnableMeasure Image1Calc][!DisableMeasure C2][!Redraw]

[C3]
Measure=Calc
Formula=C3+1
Disabled=1
IfEqualValue=21
IfEqualAction=[!HideMeter Image5][!DisableMeasure Image5Calc][!ShowMeter Image2][!EnableMeasure Image2Calc][!DisableMeasure C3][!Redraw]

[C4]
Measure=Calc
Formula=C4+1
Disabled=1
IfEqualValue=16
IfEqualAction=[!HideMeter Image6][!DisableMeasure Image6Calc][!ShowMeter Image7][!EnableMeasure Image7Calc][!DisableMeasure C4][!Redraw]

[C5]
Measure=Calc
Formula=C5+1
Disabled=1
IfEqualValue=14
IfEqualAction=[!HideMeter Image8][!DisableMeasure Image8Calc][!ShowMeter Image1][!EnableMeasure Image1Calc][!DisableMeasure C5][!Redraw]

[C6]
Measure=Calc
Formula=C6+1
Disabled=1
IfEqualValue=15
IfEqualAction=[!HideMeter Image9][!DisableMeasure Image9Calc][!ShowMeter Image7][!EnableMeasure Image7Calc][!DisableMeasure C6][!Redraw]

[C7]
Measure=Calc
Formula=C7+1
Disabled=1
IfEqualValue=12
IfEqualAction=[!HideMeter Image10][!DisableMeasure Image10Calc][!ShowMeter Image11][!EnableMeasure Image11Calc][!DisableMeasure C7][!Redraw]

[C8]
Measure=Calc
Formula=C8+1
Disabled=1
IfEqualValue=12
IfEqualAction=[!HideMeter Image12][!DisableMeasure Image12Calc][!ShowMeter Image1][!EnableMeasure Image1Calc][!DisableMeasure C8][!Redraw]

[C9]
Measure=Calc
Formula=C9+1
Disabled=1
IfEqualValue=20
IfEqualAction=[!HideMeter Image01][!DisableMeasure C9][!Redraw]

[C10]
Measure=Calc
Formula=C10+1
Disabled=1
IfEqualValue=10
IfEqualAction=[!HideMeter Image13][!DisableMeasure Image13Calc][!ShowMeter Image14][!EnableMeasure Image14Calc][!DisableMeasure C10][!Redraw]

[C11]
Measure=Calc
Formula=C11+1
Disabled=1
IfEqualValue=10
IfEqualAction=[!HideMeter Image15][!DisableMeasure Image15Calc][!ShowMeter Image1][!EnableMeasure Image1Calc][!DisableMeasure C11][!Redraw]

[C12]
Measure=Calc
Formula=C12+1
Disabled=1
IfEqualValue=12
IfEqualAction=[!HideMeter Image16][!DisableMeasure Image16Calc][!ShowMeter Image14][!EnableMeasure Image14Calc][!DisableMeasure C12][!Redraw]

;======================== 文字 =======================

[Text1]
Meter=String
x=237
y=95
h=2
FontSize=9
FontColor=436EEE
AntiAlias=1
DynamicVariables=1
Text=有什么事吗？舰长
Hidden=1

[Text2]
Meter=String
x=250
y=110
h=2
FontSize=9
FontColor=FF0000
AntiAlias=1
DynamicVariables=1
Text=打开
Hidden=1