[Rainmeter]
Update=100

[Metadata]
Name=崩坏女王
Author=会飞的呱太
Version=1.00

;======================== Image =======================

[ImageStyle]
MeasureName=#CurrentSection#Calc
X=100
y=300
Hidden=1

;======================== 动作 =======================
[Image1]
Meter=Image
ImagePath=bitmaps\1
MeterStyle=ImageStyle
X=100
y=300
W=180
Hidden=0
LeftMouseUpAction=[!HideMeter Image1][!DisableMeasure Image1Calc][!EnableMeasure mFrames][!ShowMeter bitmap][!UpdateMeasure mRandom][!UpdateMeasure mRandom1][!EnableMeasure C0][play "bitmaps\yxiao\[mRandom][mRandom1].wav"][!Redraw]
MiddleMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter Image00][!ShowMeter Text1][!ShowMeter Text2]

;=========蹲下计数器C1
[Image2]
Meter=Image
ImagePath=bitmaps\2
MeterStyle=ImageStyle
x=92
y=273
W=198

[Image3]
Meter=Image
ImagePath=bitmaps\3
MeterStyle=ImageStyle
x=92
y=273
W=198
LeftMouseUpAction=[!HideMeter Image3][!DisableMeasure Image3Calc][!ShowMeter Image5][!EnableMeasure Image5Calc][!EnableMeasure C3][!ShowMeter Image01][!ShowMeter Image02][!ShowMeter Image03][!EnableMeasure C100][!UpdateMeasure mRandom1][play "bitmaps\yxiao\1[mRandom1].wav"][!Redraw]
MiddleMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter Image00][!ShowMeter Text1][!ShowMeter Text2]

;=========蹲下计数器C2
[Image4]
Meter=Image
ImagePath=bitmaps\4
MeterStyle=ImageStyle
x=92
y=273
W=198

;=========蹲下计数器C3
[Image5]
Meter=Image
ImagePath=bitmaps\5
MeterStyle=ImageStyle
x=92
y=273
W=198

;=========沙发计数器C4
[Image6]
Meter=Image
ImagePath=bitmaps\6
MeterStyle=ImageStyle
x=101
y=240
W=219

[Image7]
Meter=Image
ImagePath=bitmaps\7
MeterStyle=ImageStyle
x=101
y=240
W=219
LeftMouseUpAction=[!HideMeter Image7][!DisableMeasure Image7Calc][!ShowMeter Image9][!EnableMeasure Image9Calc][!EnableMeasure C6][!ShowMeter Image04][!ShowMeter Image05][!EnableMeasure C100][!UpdateMeasure mRandom1][play "bitmaps\yxiao\2[mRandom1].wav"][!Redraw]
MiddleMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter Image00][!ShowMeter Text1][!ShowMeter Text2]

;=========沙发计数器C5
[Image8]
Meter=Image
ImagePath=bitmaps\8
MeterStyle=ImageStyle
x=101
y=240
W=219

;=========沙发计数器C6
[Image9]
Meter=Image
ImagePath=bitmaps\9
MeterStyle=ImageStyle
x=100
y=240
W=219

;=========吃饭计数器C7
[Image10]
Meter=Image
ImagePath=bitmaps\10
MeterStyle=ImageStyle
x=101
y=240
W=219

;=========睡觉计数器C8
[Image11]
Meter=Image
ImagePath=bitmaps\11
MeterStyle=ImageStyle
x=101
y=240
W=219

[Image12]
Meter=Image
ImagePath=bitmaps\12
MeterStyle=ImageStyle
x=101
y=240
W=219
LeftMouseUpAction=[!UpdateMeasure mRandom1][play "bitmaps\yxiao\3[mRandom1].wav"][!Redraw]
MiddleMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter Image00][!ShowMeter Text1][!ShowMeter Text2]

;=========睡觉计数器C9
[Image13]
Meter=Image
ImagePath=bitmaps\13
MeterStyle=ImageStyle
x=101
y=240
W=219

;=========看书计数器C10
[Image14]
Meter=Image
ImagePath=bitmaps\14
MeterStyle=ImageStyle
x=90
y=278
W=200

[Image15]
Meter=Image
ImagePath=bitmaps\15
MeterStyle=ImageStyle
x=90
y=278
W=200
LeftMouseUpAction=[!UpdateMeasure mRandom1][play "bitmaps\yxiao\4[mRandom1].wav"][!Redraw]
MiddleMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter Image00][!ShowMeter Text1][!ShowMeter Text2]

;=========看书计数器C11
[Image16]
Meter=Image
ImagePath=bitmaps\16
MeterStyle=ImageStyle
x=90
y=278
W=200

;=========吓人计数器C12
[Image17]
Meter=Image
ImagePath=bitmaps\17
MeterStyle=ImageStyle
x=83
y=301
W=230

[Image18]
Meter=Image
ImagePath=bitmaps\18
MeterStyle=ImageStyle
x=83
y=301
W=230
LeftMouseUpAction=[!UpdateMeasure mRandom1][play "bitmaps\yxiao\5[mRandom1].wav"][!Redraw]
MiddleMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter Image00][!ShowMeter Text1][!ShowMeter Text2]

;=========吓人计数器C13
[Image19]
Meter=Image
ImagePath=bitmaps\19
MeterStyle=ImageStyle
x=83
y=301
W=230

[Image20]
Meter=Image
ImagePath=bitmaps\20
MeterStyle=ImageStyle
x=95
y=297
W=230
LeftMouseUpAction=[!UpdateMeasure mRandom1][play "bitmaps\yxiao\6[mRandom1].wav"][!Redraw]
MiddleMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter Image00][!ShowMeter Text1][!ShowMeter Text2]

;======================== ImageCalc =======================

[Image1Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%17

[Image2Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%13
Disabled=1

[Image3Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%20
Disabled=1

[Image4Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%20
Disabled=1

[Image5Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%5
Disabled=1

[Image6Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%24
Disabled=1

[Image7Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%20
Disabled=1

[Image8Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%16
Disabled=1

[Image9Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%8
Disabled=1

[Image10Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%38
Disabled=1

[Image11Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%16
Disabled=1

[Image12Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%20
Disabled=1

[Image13Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%22
Disabled=1

[Image14Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%26
Disabled=1

[Image15Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%22
Disabled=1

[Image16Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%26
Disabled=1

[Image17Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%34
Disabled=1

[Image18Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%18
Disabled=1

[Image19Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%29
Disabled=1

[Image20Calc]
Measure=Calc
Formula=(#CurrentSection#+1)%72
Disabled=1

;========================= 随机数 =======================

[mRandom]
Measure=Calc
Formula=Random
LowBound=100
HighBound=102
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

OnUpdateAction=[!SetOption bitmap AntiAlias 1][!Redraw]

[mRandom2]
Measure=Calc
Formula=Random
LowBound=1
HighBound=3
UpdateRandom=1
UniqueRandom=1
DynamicVariables=1
UpdateDivider=-1

;=========随机计数器C0

[mFrames]
Measure=Calc
Formula=(#CurrentSection#+1)%18
Disabled=1

[bitmap]
Meter=Image
ImagePath=bitmaps\[mRandom]
MeasureName=mFrames
AntiAlias=1
x=102
y=255
w=186
Hidden=1

;======================== 表情 ========================
[Biaoq]
Meter=Image
ImageName=bitmaps\guatai\[mRandom1].png
MeterStyle=ImageStyle
DynamicVariables=1
x=135
y=315
w=50

;======================== 福利 ========================
[Fuli]
Meter=Image
ImageName=bitmaps\fuli\2[mRandom2].png
MeterStyle=ImageStyle
DynamicVariables=1
x=300
y=50
w=350

;======================== 选择 ========================
[Image01]
Meter=Image
ImageName=bitmaps\guatai\看书.png
MeterStyle=ImageStyle
LeftMouseUpAction=[!HideMeter Image5][!DisableMeasure Image5Calc][!HideMeter Image3][!DisableMeasure Image3Calc][!ShowMeter Image4][!EnableMeasure Image4Calc][!EnableMeasure C21][!DisableMeasure C3][!DisableMeasure T2][!EnableMeasure M1][!SetVariable XQ "1"][!HideMeter Image01][!HideMeter Image02][!HideMeter Image03][!Redraw]
x=255
y=390
w=30

[Image02]
Meter=Image
ImageName=bitmaps\guatai\吓人.png
MeterStyle=ImageStyle
LeftMouseUpAction=[!HideMeter Image5][!DisableMeasure Image5Calc][!HideMeter Image3][!DisableMeasure Image3Calc][!ShowMeter Image4][!EnableMeasure Image4Calc][!EnableMeasure C22][!DisableMeasure C3][!DisableMeasure T2][!EnableMeasure M2][!SetVariable XQ "2"][!HideMeter Image01][!HideMeter Image02][!HideMeter Image03][!Redraw]
x=255
y=425
w=30

[Image03]
Meter=Image
ImageName=bitmaps\guatai\下棋.png
MeterStyle=ImageStyle
LeftMouseUpAction=[!HideMeter Image5][!DisableMeasure Image5Calc][!HideMeter Image3][!DisableMeasure Image3Calc][!ShowMeter Image4][!EnableMeasure Image4Calc][!EnableMeasure C23][!DisableMeasure C3][!DisableMeasure T2][!EnableMeasure M3][!SetVariable XQ "3"][!HideMeter Image01][!HideMeter Image02][!HideMeter Image03][!Redraw]
x=255
y=460
w=30

[Image04]
Meter=Image
ImageName=bitmaps\guatai\吃饭.png
MeterStyle=ImageStyle
LeftMouseUpAction=[!HideMeter Image9][!DisableMeasure Image9Calc][!HideMeter Image7][!DisableMeasure Image7Calc][!ShowMeter Image10][!EnableMeasure Image10Calc][!EnableMeasure C7][!DisableMeasure C6][!DisableMeasure T3][!EnableMeasure M4][!SetVariable XQ "4"][!HideMeter Image04][!HideMeter Image05][!Redraw]
x=240
y=340
w=30

[Image05]
Meter=Image
ImageName=bitmaps\guatai\睡觉.png
MeterStyle=ImageStyle
LeftMouseUpAction=[!HideMeter Image9][!DisableMeasure Image9Calc][!HideMeter Image7][!DisableMeasure Image7Calc][!ShowMeter Image11][!EnableMeasure Image11Calc][!EnableMeasure C8][!DisableMeasure C6][!DisableMeasure T3][!EnableMeasure M4][!SetVariable XQ "5"][!HideMeter Image04][!HideMeter Image05][!Redraw]
x=275
y=340
w=30
;======================== 下棋中 ======================
[Image100]
Meter=Image
ImageName=bitmaps\guatai\棋盘.png
MeterStyle=ImageStyle
x=330
y=10
w=400

[Image101]
Meter=Image
ImageName=bitmaps\guatai\棋子.png
MeterStyle=ImageStyle
LeftMouseUpAction=[!HideMeter Image101][!ShowMeter Image111][!EnableMeasure C101]
x=513
y=130
w=33

[Image111]
Meter=Image
ImageName=bitmaps\guatai\舰长.png
MeterStyle=ImageStyle
x=513
y=130
w=33

[Image112]
Meter=Image
ImageName=bitmaps\guatai\女王.png
MeterStyle=ImageStyle
x=513
y=130
w=33

[Image102]
Meter=Image
ImageName=bitmaps\guatai\棋子.png
MeterStyle=ImageStyle
LeftMouseUpAction=[!HideMeter Image102][!ShowMeter Image103][!ShowMeter Image121][!EnableMeasure C102]
x=513
y=195
w=33

[Image121]
Meter=Image
ImageName=bitmaps\guatai\舰长.png
MeterStyle=ImageStyle
x=513
y=195
w=33

[Image122]
Meter=Image
ImageName=bitmaps\guatai\女王.png
MeterStyle=ImageStyle
x=513
y=195
w=33

[Image103]
Meter=Image
ImageName=bitmaps\guatai\棋子.png
MeterStyle=ImageStyle
LeftMouseUpAction=[!HideMeter Image103][!ShowMeter Image104][!ShowMeter Image131][!EnableMeasure C103]
x=416
y=291
w=33

[Image131]
Meter=Image
ImageName=bitmaps\guatai\舰长.png
MeterStyle=ImageStyle
x=416
y=291
w=33

[Image132]
Meter=Image
ImageName=bitmaps\guatai\女王.png
MeterStyle=ImageStyle
x=480
y=227
w=33

[Image104]
Meter=Image
ImageName=bitmaps\guatai\棋子.png
MeterStyle=ImageStyle
LeftMouseUpAction=[!HideMeter Image104][!ShowMeter Image141][!EnableMeasure C104][!ShowMeter Image106][!EnableMeasure C105][play "bitmaps\yxiao\2.wav"]
x=450
y=291
w=33

[Image141]
Meter=Image
ImageName=bitmaps\guatai\舰长.png
MeterStyle=ImageStyle
x=450
y=291
w=33

[Image105]
Meter=Image
ImageName=bitmaps\guatai\开心.png
MeterStyle=ImageStyle
x=118
y=326
w=40

[Image106]
Meter=Image
ImageName=bitmaps\guatai\伤心.png
MeterStyle=ImageStyle
x=118
y=326
w=40

;======================== 时间控制 ====================
[M]
Measure=Time
Format=%M
[S]
Measure=Time
Format=%S

[M1]
Measure=Calc
Formula=M*100+S
Disabled=1
IfCondition=(M1 = 0501) || (M1 = 3501) || (M1 = 1201) || (M1 = 4201) || (M1 = 1901) || (M1 = 4901)
IfTrueAction=[!HideMeter Image15][!DisableMeasure Image15Calc][!ShowMeter Image16][!EnableMeasure Image16Calc][!EnableMeasure C11][!DisableMeasure M1][!Redraw]

[M2]
Measure=Calc
Formula=M*100+S
Disabled=1
IfCondition=(M2 = 0501) || (M2 = 3501) || (M2 = 1201) || (M2 = 4201) || (M2 = 1901) || (M2 = 4901)
IfTrueAction=[!HideMeter Image18][!DisableMeasure Image18Calc][!ShowMeter Image19][!EnableMeasure Image19Calc][!EnableMeasure C13][!DisableMeasure M2][!Redraw]

[M3]
Measure=Calc
Formula=M*100+S
Disabled=1
IfCondition=(M3 = 0501) || (M3 = 3501) || (M3 = 1201) || (M3 = 4201) || (M3 = 1901) || (M3 = 4901)
IfTrueAction=[!HideMeter Image20][!DisableMeasure Image20Calc][!ShowMeter Image1][!EnableMeasure Image1Calc][!DisableMeasure M3][!Redraw]

[M4]
Measure=Calc
Formula=M*100+S
Disabled=1
IfCondition=(M4 = 2701) || (M4 = 5701)
IfTrueAction=[!HideMeter Image12][!DisableMeasure Image12Calc][!ShowMeter Image13][!EnableMeasure Image13Calc][!EnableMeasure C9][!DisableMeasure M4][!Redraw]

[T1]
Measure=Calc
Formula=M*100+S
IfCondition=(T1 = 0001) || (T1 = 3001)
IfTrueAction=[!HideMeter Image1][!DisableMeasure Image1Calc][!ShowMeter Image2][!EnableMeasure Image2Calc][!EnableMeasure C1][!EnableMeasure T2][!EnableMeasure Xinqing1][!Redraw]

IfCondition2=(T1 = 0701) || (T1 = 3701)
IfTrueAction2=[!HideMeter Image1][!DisableMeasure Image1Calc][!ShowMeter Image2][!EnableMeasure Image2Calc][!EnableMeasure C1][!EnableMeasure T2][!EnableMeasure Xinqing2][!Redraw]

IfCondition3=(T1 = 1401) || (T1 = 4401)
IfTrueAction3=[!HideMeter Image1][!DisableMeasure Image1Calc][!ShowMeter Image2][!EnableMeasure Image2Calc][!EnableMeasure C1][!EnableMeasure T2][!EnableMeasure Xinqing3][!Redraw]

IfCondition4=(T1 = 2101)
IfTrueAction4=[!HideMeter Image1][!DisableMeasure Image1Calc][!ShowMeter Image6][!EnableMeasure Image6Calc][!EnableMeasure C4][!EnableMeasure T3][!EnableMeasure Xinqing4][!Redraw]

IfCondition5=(T1 = 5101)
IfTrueAction5=[!HideMeter Image1][!DisableMeasure Image1Calc][!ShowMeter Image6][!EnableMeasure Image6Calc][!EnableMeasure C4][!EnableMeasure T3][!EnableMeasure Xinqing5][!Redraw]

[T2]
Measure=Calc
Formula=M*100+S
Disabled=1
IfCondition=(T2 = 0201) || (T2 = 0901) || (T2 = 1601) || (T2 = 3201) || (T2 = 3901) || (T2 = 4601)
IfTrueAction=[!HideMeter Image3][!DisableMeasure Image3Calc][!ShowMeter Image4][!EnableMeasure Image4Calc][!EnableMeasure C2][!DisableMeasure T2][!EnableMeasure T3][!Redraw]

[T3]
Measure=Calc
Formula=M*100+S
Disabled=1
IfCondition=(T3 = 0210) || (T3 = 3210)
IfTrueAction=[!HideMeter Image1][!DisableMeasure Image1Calc][!ShowMeter Image14][!EnableMeasure Image14Calc][!EnableMeasure C10][!DisableMeasure T3][!EnableMeasure T4][!DisableMeasure Xinqing1][!Redraw]

IfCondition2=(T3 = 0910) || (T3 = 3910)
IfTrueAction2=[!HideMeter Image1][!DisableMeasure Image1Calc][!ShowMeter Image17][!EnableMeasure Image17Calc][!EnableMeasure C12][!DisableMeasure T3][!EnableMeasure T4][!DisableMeasure Xinqing2][!Redraw]

IfCondition3=(T3 = 1610) || (T3 = 4610)
IfTrueAction3=[!HideMeter Image1][!DisableMeasure Image1Calc][!ShowMeter Image20][!EnableMeasure Image20Calc][!DisableMeasure T3][!EnableMeasure T4][!DisableMeasure Xinqing3][!Redraw]

IfCondition4=(T3 = 2310)
IfTrueAction4=[!HideMeter Image7][!DisableMeasure Image7Calc][!ShowMeter Image10][!EnableMeasure Image10Calc][!EnableMeasure C7][!DisableMeasure T3][!DisableMeasure Xinqing4][!EnableMeasure T4][!Redraw]

IfCondition5=(T3 = 5310)
IfTrueAction5=[!HideMeter Image7][!DisableMeasure Image7Calc][!ShowMeter Image11][!EnableMeasure Image11Calc][!EnableMeasure C8][!DisableMeasure T3][!DisableMeasure Xinqing5][!EnableMeasure T4][!Redraw]

[T4]
Measure=Calc
Formula=M*100+S
Disabled=1
IfCondition=(T4 = 0501) || (T4 = 3501)
IfTrueAction=[!HideMeter Image15][!DisableMeasure Image15Calc][!ShowMeter Image16][!EnableMeasure Image16Calc][!EnableMeasure C11][!DisableMeasure T4][!Redraw]

IfCondition2=(T4 = 1201) || (T4 = 4201)
IfTrueAction2=[!HideMeter Image18][!DisableMeasure Image18Calc][!ShowMeter Image19][!EnableMeasure Image19Calc][!EnableMeasure C13][!DisableMeasure T4][!Redraw]

IfCondition3=(T4 = 1901) || (T4 = 4901)
IfTrueAction3=[!HideMeter Image20][!DisableMeasure Image20Calc][!ShowMeter Image1][!EnableMeasure Image1Calc][!DisableMeasure T4][!Redraw]

IfCondition4=(T4 = 2701) || (T4 = 5701)
IfTrueAction4=[!HideMeter Image12][!DisableMeasure Image12Calc][!ShowMeter Image13][!EnableMeasure Image13Calc][!EnableMeasure C9][!DisableMeasure T4][!Redraw]

[T5]
Measure=Calc
Formula=M*100+S
Disabled=1
IfCondition=(T5 = 0210) || (T5 = 3210)
IfTrueAction=

IfCondition2=(T5 = 0910) || (T5 = 3910)
IfTrueAction2=

IfCondition3=(T5 = 1610) || (T5 = 4610)
IfTrueAction3=

IfCondition4=(T5 = 2310)
IfTrueAction4=

IfCondition5=(T5 = 5310)
IfTrueAction5=

;======================== 计数器 =======================
[C0]
Measure=Calc
Formula=C0+1
Disabled=1
IfEqualValue=18
IfEqualAction=[!HideMeter bitmap][!DisableMeasure mFrames][!ShowMeter Image1][!EnableMeasure Image1Calc][!DisableMeasure C0][!Redraw][!DisableMeasure mFrames]

[C1]
Measure=Calc
Formula=C1+1
Disabled=1
IfEqualValue=13
IfEqualAction=[!HideMeter Image2][!DisableMeasure Image2Calc][!ShowMeter Image3][!EnableMeasure Image3Calc][!DisableMeasure C1][!Redraw]

[C2]
Measure=Calc
Formula=C2+1
Disabled=1
IfEqualValue=20
IfEqualAction=[!HideMeter Image4][!DisableMeasure Image4Calc][!ShowMeter Image1][!EnableMeasure Image1Calc][!DisableMeasure C2][!Redraw]

[C21]
Measure=Calc
Formula=C21+1
Disabled=1
IfEqualValue=20
IfEqualAction=[!HideMeter Image4][!DisableMeasure Image4Calc][!ShowMeter Image14][!EnableMeasure Image14Calc][!DisableMeasure C21][!EnableMeasure C10][!Redraw]

[C22]
Measure=Calc
Formula=C22+1
Disabled=1
IfEqualValue=20
IfEqualAction=[!HideMeter Image4][!DisableMeasure Image4Calc][!ShowMeter Image17][!EnableMeasure Image17Calc][!DisableMeasure C22][!EnableMeasure C12][!Redraw]

[C23]
Measure=Calc
Formula=C23+1
Disabled=1
IfEqualValue=20
IfEqualAction=[!HideMeter Image4][!DisableMeasure Image4Calc][!ShowMeter Image20][!EnableMeasure Image20Calc][!ShowMeter Image100][!ShowMeter Image101][!ShowMeter Image102][!DisableMeasure C23][!Redraw]

[C3]
Measure=Calc
Formula=C3+1
Disabled=1
IfEqualValue=15
IfEqualAction=[!HideMeter Image5][!DisableMeasure Image5Calc][!ShowMeter Image3][!EnableMeasure Image3Calc][!DisableMeasure C3][!Redraw]

[C4]
Measure=Calc
Formula=C4+1
Disabled=1
IfEqualValue=24
IfEqualAction=[!HideMeter Image6][!DisableMeasure Image6Calc][!ShowMeter Image7][!EnableMeasure Image7Calc][!DisableMeasure C4][!Redraw]

[C5]
Measure=Calc
Formula=C5+1
Disabled=1
IfEqualValue=16
IfEqualAction=[!HideMeter Image8][!DisableMeasure Image8Calc][!ShowMeter Image1][!EnableMeasure Image1Calc][!DisableMeasure C5][!Redraw]

[C6]
Measure=Calc
Formula=C6+1
Disabled=1
IfEqualValue=16
IfEqualAction=[!HideMeter Image9][!DisableMeasure Image9Calc][!ShowMeter Image7][!EnableMeasure Image7Calc][!DisableMeasure C6][!Redraw]

[C7]
Measure=Calc
Formula=C7+1
Disabled=1
IfEqualValue=38
IfEqualAction=[!HideMeter Image10][!DisableMeasure Image10Calc][!ShowMeter Image11][!EnableMeasure Image11Calc][!DisableMeasure C7][!EnableMeasure C8][!Redraw]

[C8]
Measure=Calc
Formula=C8+1
Disabled=1
IfEqualValue=16
IfEqualAction=[!HideMeter Image11][!DisableMeasure Image11Calc][!ShowMeter Image12][!EnableMeasure Image12Calc][!DisableMeasure C8][!Redraw]

[C9]
Measure=Calc
Formula=C9+1
Disabled=1
IfEqualValue=22
IfEqualAction=[!HideMeter Image13][!DisableMeasure Image13Calc][!ShowMeter Image8][!EnableMeasure Image8Calc][!DisableMeasure C9][!EnableMeasure C5][!Redraw]

[C10]
Measure=Calc
Formula=C10+1
Disabled=1
IfEqualValue=26
IfEqualAction=[!HideMeter Image14][!DisableMeasure Image14Calc][!ShowMeter Image15][!EnableMeasure Image15Calc][!DisableMeasure C10][!Redraw]

[C11]
Measure=Calc
Formula=C11+1
Disabled=1
IfEqualValue=26
IfEqualAction=[!HideMeter Image16][!DisableMeasure Image16Calc][!ShowMeter Image1][!EnableMeasure Image1Calc][!DisableMeasure C11][!Redraw]

[C12]
Measure=Calc
Formula=C12+1
Disabled=1
IfEqualValue=34
IfEqualAction=[!HideMeter Image17][!DisableMeasure Image17Calc][!ShowMeter Image18][!EnableMeasure Image18Calc][!DisableMeasure C12][!Redraw]

[C13]
Measure=Calc
Formula=C13+1
Disabled=1
IfEqualValue=29
IfEqualAction=[!HideMeter Image19][!DisableMeasure Image19Calc][!ShowMeter Image1][!EnableMeasure Image1Calc][!DisableMeasure C13][!Redraw]

[C100]
Measure=Calc
Formula=C100+1
Disabled=1
IfEqualValue=25
IfEqualAction=[!HideMeter Image01][!HideMeter Image02][!HideMeter Image03][!HideMeter Image04][!HideMeter Image05][!DisableMeasure C100][!Redraw]

[C101]
Measure=Calc
Formula=C101+1
Disabled=1
IfEqualValue=15
IfEqualAction=[!ShowMeter Image122][!DisableMeasure C101][!EnableMeasure C104][!ShowMeter Image105][!EnableMeasure C105][!EnableMeasure Xinqing1][!SetVariable XQ "1"][play "bitmaps\yxiao\1.wav"]

[C102]
Measure=Calc
Formula=C102+1
Disabled=1
IfEqualValue=15
IfEqualAction=[!ShowMeter Image112][!DisableMeasure C102]

[C103]
Measure=Calc
Formula=C103+1
Disabled=1
IfEqualValue=15
IfEqualAction=[!ShowMeter Image132][!DisableMeasure C103]

[C104]
Measure=Calc
Formula=C104+1
Disabled=1
IfEqualValue=20
IfEqualAction=[!HideMeter Image100][!HideMeter Image101][!HideMeter Image111][!HideMeter Image112][!HideMeter Image102][!HideMeter Image121][!HideMeter Image122][!HideMeter Image103][!HideMeter Image131][!HideMeter Image132][!HideMeter Image104][!HideMeter Image141][!HideMeter Image20][!DisableMeasure Image20Calc][!ShowMeter Image1][!EnableMeasure Image1Calc][!DisableMeasure M3][!DisableMeasure C104][!EnableMeasure Xinqing1][!SetVariable XQ "2"][!Redraw]

[C105]
Measure=Calc
Formula=C105+1
Disabled=1
IfEqualValue=9
IfEqualAction=[!ShowMeter Image105][!DisableMeasure C105][!EnableMeasure C107][!Redraw]

[C106]
Measure=Calc
Formula=C106+1
Disabled=1
IfEqualValue=9
IfEqualAction=[!ShowMeter Image106][!DisableMeasure C106][!EnableMeasure C107][!Redraw]

[C107]
Measure=Calc
Formula=C107+1
Disabled=1
IfEqualValue=12
IfEqualAction=[!HideMeter Image105][!HideMeter Image106][!HideMeter Fuli][!DisableMeasure C107][!Redraw]

[C108]
Measure=Calc
Formula=C108+1
Disabled=1
IfEqualValue=10
IfEqualAction=[rundll32.exe powrprof.dll,SetSuspendState][!SetVariable HG "0"][!DisableMeasure C108][!Redraw]

;=======================心情判断 =====================
[Xinqing1]
Measure=Calc
Formula=#XQ#
Disabled=1
IfCondition=(Xinqing1 = 1 )
IfTrueAction=[!SetVariable HG "(#HG#+1)"][!DisableMeasure Xinqing1][!SetVariable XQ "9"][!EnableMeasure C105]
IfCondition2=(Xinqing1 = 2) || (Xinqing1 = 3)
IfTrueAction2=[!SetVariable HG "(#HG#-1)"][!DisableMeasure Xinqing1][!SetVariable XQ "9"][!EnableMeasure C106]
DynamicVariables=1

[Xinqing2]
Measure=Calc
Formula=#XQ#
Disabled=1
IfCondition=(Xinqing2 = 2 )
IfTrueAction=[!SetVariable HG "(#HG#+1)"][!DisableMeasure Xinqing2][!SetVariable XQ "9"][!EnableMeasure C105]
IfCondition2=(Xinqing2 = 1) || (Xinqing2 = 3)
IfTrueAction2=[!SetVariable HG "(#HG#-1)"][!DisableMeasure Xinqing2][!SetVariable XQ "9"][!EnableMeasure C106]
DynamicVariables=1

[Xinqing3]
Measure=Calc
Formula=#XQ#
Disabled=1
IfCondition=(Xinqing3 = 3)
IfTrueAction=[!SetVariable HG "(#HG#+1)"][!DisableMeasure Xinqing3][!SetVariable XQ "9"][!EnableMeasure C105]
IfCondition2=(Xinqing3 = 1) || (Xinqing3 = 2)
IfTrueAction2=[!SetVariable HG "(#HG#-1)"][!DisableMeasure Xinqing3][!SetVariable XQ "9"][!EnableMeasure C106]
DynamicVariables=1

[Xinqing4]
Measure=Calc
Formula=#XQ#
Disabled=1
IfCondition=(Xinqing4 = 4)
IfTrueAction=[!SetVariable HG "(#HG#+1)"][!DisableMeasure Xinqing4][!SetVariable XQ "9"][!EnableMeasure C105]
IfCondition2=(Xinqing4 = 5)
IfTrueAction2=[!SetVariable HG "(#HG#-1)"][!DisableMeasure Xinqing4][!SetVariable XQ "9"][!EnableMeasure C106]
DynamicVariables=1

[Xinqing5]
Measure=Calc
Formula=#XQ#
Disabled=1
IfCondition=(Xinqing5 = 5)
IfTrueAction=[!SetVariable HG "(#HG#+1)"][!DisableMeasure Xinqing5][!SetVariable XQ "9"][!EnableMeasure C105]
IfCondition2=(Xinqing5 = 4)
IfTrueAction2=[!SetVariable HG "(#HG#-1)"][!DisableMeasure Xinqing5][!SetVariable XQ "9"][!EnableMeasure C106]
DynamicVariables=1

[Haogan]
Measure=Calc
Formula=#HG#
IfCondition=(Haogan = 5)
IfTrueAction=[!UpdateMeasure mRandom2][!ShowMeter Fuli][!SetVariable HG "0"][!EnableMeasure C107]
IfCondition2=(Haogan = -5)
IfTrueAction2=[play "bitmaps\yxiao\3.wav"][!EnableMeasure C108]
DynamicVariables=1

;======================== 文字 =======================
[Image00]
Meter=Image
ImageName=bitmaps\guatai\对话框.png
MeterStyle=ImageStyle
x=245
y=371
w=113

[Text1]
Meter=String
x=253
y=375
h=2
FontSize=9
FontColor=436EEE
AntiAlias=1
DynamicVariables=1
Text=何事？愚蠢的人类
Hidden=1

[Text2]
Meter=String
x=270
y=390
h=2
FontSize=9
FontColor=FF0000
AntiAlias=1
DynamicVariables=1
Text=打开
Hidden=1