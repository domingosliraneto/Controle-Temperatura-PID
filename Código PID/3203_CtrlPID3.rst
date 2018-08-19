                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW32)
                                      4 ;--------------------------------------------------------
                                      5 	.module 3203_CtrlPID3
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _Tit2
                                     12 	.globl _Tit1
                                     13 	.globl _setLCD4
                                     14 	.globl _main
                                     15 	.globl _ajustPID
                                     16 	.globl _int2Ser
                                     17 	.globl _char2Ser
                                     18 	.globl _int2ascii
                                     19 	.globl _algs2ser
                                     20 	.globl _serial
                                     21 	.globl _convAD08
                                     22 	.globl _clockAD
                                     23 	.globl _inic
                                     24 	.globl _iniLCD4
                                     25 	.globl _char2LCD
                                     26 	.globl _wrLCD4
                                     27 	.globl _wrLCD8
                                     28 	.globl _timer_0
                                     29 	.globl _ext_0
                                     30 	.globl _RW
                                     31 	.globl _DC
                                     32 	.globl _adcDt
                                     33 	.globl _adcCk
                                     34 	.globl _adcCS
                                     35 	.globl _lcdCS
                                     36 	.globl _S2D2
                                     37 	.globl _S1D1
                                     38 	.globl _SwInt
                                     39 	.globl _TxBip
                                     40 	.globl _RxLed
                                     41 	.globl _CY
                                     42 	.globl _AC
                                     43 	.globl _F0
                                     44 	.globl _RS1
                                     45 	.globl _RS0
                                     46 	.globl _OV
                                     47 	.globl _F1
                                     48 	.globl _P
                                     49 	.globl _PS
                                     50 	.globl _PT1
                                     51 	.globl _PX1
                                     52 	.globl _PT0
                                     53 	.globl _PX0
                                     54 	.globl _RD
                                     55 	.globl _WR
                                     56 	.globl _T1
                                     57 	.globl _T0
                                     58 	.globl _INT1
                                     59 	.globl _INT0
                                     60 	.globl _TXD
                                     61 	.globl _RXD
                                     62 	.globl _P3_7
                                     63 	.globl _P3_6
                                     64 	.globl _P3_5
                                     65 	.globl _P3_4
                                     66 	.globl _P3_3
                                     67 	.globl _P3_2
                                     68 	.globl _P3_1
                                     69 	.globl _P3_0
                                     70 	.globl _EA
                                     71 	.globl _ES
                                     72 	.globl _ET1
                                     73 	.globl _EX1
                                     74 	.globl _ET0
                                     75 	.globl _EX0
                                     76 	.globl _P2_7
                                     77 	.globl _P2_6
                                     78 	.globl _P2_5
                                     79 	.globl _P2_4
                                     80 	.globl _P2_3
                                     81 	.globl _P2_2
                                     82 	.globl _P2_1
                                     83 	.globl _P2_0
                                     84 	.globl _SM0
                                     85 	.globl _SM1
                                     86 	.globl _SM2
                                     87 	.globl _REN
                                     88 	.globl _TB8
                                     89 	.globl _RB8
                                     90 	.globl _TI
                                     91 	.globl _RI
                                     92 	.globl _P1_7
                                     93 	.globl _P1_6
                                     94 	.globl _P1_5
                                     95 	.globl _P1_4
                                     96 	.globl _P1_3
                                     97 	.globl _P1_2
                                     98 	.globl _P1_1
                                     99 	.globl _P1_0
                                    100 	.globl _TF1
                                    101 	.globl _TR1
                                    102 	.globl _TF0
                                    103 	.globl _TR0
                                    104 	.globl _IE1
                                    105 	.globl _IT1
                                    106 	.globl _IE0
                                    107 	.globl _IT0
                                    108 	.globl _P0_7
                                    109 	.globl _P0_6
                                    110 	.globl _P0_5
                                    111 	.globl _P0_4
                                    112 	.globl _P0_3
                                    113 	.globl _P0_2
                                    114 	.globl _P0_1
                                    115 	.globl _P0_0
                                    116 	.globl _LCD
                                    117 	.globl _CLKREG
                                    118 	.globl _B
                                    119 	.globl _ACC
                                    120 	.globl _PSW
                                    121 	.globl _IP
                                    122 	.globl _P3
                                    123 	.globl _IE
                                    124 	.globl _P2
                                    125 	.globl _SBUF
                                    126 	.globl _SCON
                                    127 	.globl _P1
                                    128 	.globl _TH1
                                    129 	.globl _TH0
                                    130 	.globl _TL1
                                    131 	.globl _TL0
                                    132 	.globl _TMOD
                                    133 	.globl _TCON
                                    134 	.globl _PCON
                                    135 	.globl _DPH
                                    136 	.globl _DPL
                                    137 	.globl _SP
                                    138 	.globl _P0
                                    139 	.globl _wrLCD4_PARM_1
                                    140 	.globl _wrLCD8_PARM_1
                                    141 	.globl _useBuf
                                    142 	.globl _Ch01
                                    143 	.globl _ad2On
                                    144 	.globl _ad1On
                                    145 	.globl _Txing
                                    146 	.globl _TxFlag
                                    147 	.globl _RxFlag
                                    148 	.globl _tip
                                    149 	.globl _bip
                                    150 	.globl _som
                                    151 	.globl _umSeg
                                    152 	.globl _pwm
                                    153 	.globl _pid
                                    154 	.globl _int2Ser_PARM_3
                                    155 	.globl _int2Ser_PARM_2
                                    156 	.globl _char2Ser_PARM_3
                                    157 	.globl _char2Ser_PARM_2
                                    158 	.globl _algs2ser_PARM_3
                                    159 	.globl _algs2ser_PARM_2
                                    160 	.globl _char2LCD_PARM_3
                                    161 	.globl _char2LCD_PARM_2
                                    162 	.globl _algs
                                    163 	.globl _TxB
                                    164 	.globl _RxB
                                    165 	.globl _wTxB
                                    166 	.globl _rTxB
                                    167 	.globl _wRxB
                                    168 	.globl _rRxB
                                    169 	.globl _TxByte
                                    170 	.globl _RxByte
                                    171 	.globl _freq
                                    172 	.globl _x50us
                                    173 	.globl _cnt200
                                    174 	.globl _cnt100
                                    175 	.globl _disp2
                                    176 	.globl _disp1
                                    177 	.globl _cont
                                    178 	.globl _S2
                                    179 	.globl _S1
                                    180 	.globl _delay50
                                    181 	.globl _RTproc_1
                                    182 	.globl _RTproc_2
                                    183 ;--------------------------------------------------------
                                    184 ; special function registers
                                    185 ;--------------------------------------------------------
                                    186 	.area RSEG    (ABS,DATA)
      000000                        187 	.org 0x0000
                           000080   188 G$P0$0$0 == 0x0080
                           000080   189 _P0	=	0x0080
                           000081   190 G$SP$0$0 == 0x0081
                           000081   191 _SP	=	0x0081
                           000082   192 G$DPL$0$0 == 0x0082
                           000082   193 _DPL	=	0x0082
                           000083   194 G$DPH$0$0 == 0x0083
                           000083   195 _DPH	=	0x0083
                           000087   196 G$PCON$0$0 == 0x0087
                           000087   197 _PCON	=	0x0087
                           000088   198 G$TCON$0$0 == 0x0088
                           000088   199 _TCON	=	0x0088
                           000089   200 G$TMOD$0$0 == 0x0089
                           000089   201 _TMOD	=	0x0089
                           00008A   202 G$TL0$0$0 == 0x008a
                           00008A   203 _TL0	=	0x008a
                           00008B   204 G$TL1$0$0 == 0x008b
                           00008B   205 _TL1	=	0x008b
                           00008C   206 G$TH0$0$0 == 0x008c
                           00008C   207 _TH0	=	0x008c
                           00008D   208 G$TH1$0$0 == 0x008d
                           00008D   209 _TH1	=	0x008d
                           000090   210 G$P1$0$0 == 0x0090
                           000090   211 _P1	=	0x0090
                           000098   212 G$SCON$0$0 == 0x0098
                           000098   213 _SCON	=	0x0098
                           000099   214 G$SBUF$0$0 == 0x0099
                           000099   215 _SBUF	=	0x0099
                           0000A0   216 G$P2$0$0 == 0x00a0
                           0000A0   217 _P2	=	0x00a0
                           0000A8   218 G$IE$0$0 == 0x00a8
                           0000A8   219 _IE	=	0x00a8
                           0000B0   220 G$P3$0$0 == 0x00b0
                           0000B0   221 _P3	=	0x00b0
                           0000B8   222 G$IP$0$0 == 0x00b8
                           0000B8   223 _IP	=	0x00b8
                           0000D0   224 G$PSW$0$0 == 0x00d0
                           0000D0   225 _PSW	=	0x00d0
                           0000E0   226 G$ACC$0$0 == 0x00e0
                           0000E0   227 _ACC	=	0x00e0
                           0000F0   228 G$B$0$0 == 0x00f0
                           0000F0   229 _B	=	0x00f0
                           00008F   230 G$CLKREG$0$0 == 0x008f
                           00008F   231 _CLKREG	=	0x008f
                           000090   232 G$LCD$0$0 == 0x0090
                           000090   233 _LCD	=	0x0090
                                    234 ;--------------------------------------------------------
                                    235 ; special function bits
                                    236 ;--------------------------------------------------------
                                    237 	.area RSEG    (ABS,DATA)
      000000                        238 	.org 0x0000
                           000080   239 G$P0_0$0$0 == 0x0080
                           000080   240 _P0_0	=	0x0080
                           000081   241 G$P0_1$0$0 == 0x0081
                           000081   242 _P0_1	=	0x0081
                           000082   243 G$P0_2$0$0 == 0x0082
                           000082   244 _P0_2	=	0x0082
                           000083   245 G$P0_3$0$0 == 0x0083
                           000083   246 _P0_3	=	0x0083
                           000084   247 G$P0_4$0$0 == 0x0084
                           000084   248 _P0_4	=	0x0084
                           000085   249 G$P0_5$0$0 == 0x0085
                           000085   250 _P0_5	=	0x0085
                           000086   251 G$P0_6$0$0 == 0x0086
                           000086   252 _P0_6	=	0x0086
                           000087   253 G$P0_7$0$0 == 0x0087
                           000087   254 _P0_7	=	0x0087
                           000088   255 G$IT0$0$0 == 0x0088
                           000088   256 _IT0	=	0x0088
                           000089   257 G$IE0$0$0 == 0x0089
                           000089   258 _IE0	=	0x0089
                           00008A   259 G$IT1$0$0 == 0x008a
                           00008A   260 _IT1	=	0x008a
                           00008B   261 G$IE1$0$0 == 0x008b
                           00008B   262 _IE1	=	0x008b
                           00008C   263 G$TR0$0$0 == 0x008c
                           00008C   264 _TR0	=	0x008c
                           00008D   265 G$TF0$0$0 == 0x008d
                           00008D   266 _TF0	=	0x008d
                           00008E   267 G$TR1$0$0 == 0x008e
                           00008E   268 _TR1	=	0x008e
                           00008F   269 G$TF1$0$0 == 0x008f
                           00008F   270 _TF1	=	0x008f
                           000090   271 G$P1_0$0$0 == 0x0090
                           000090   272 _P1_0	=	0x0090
                           000091   273 G$P1_1$0$0 == 0x0091
                           000091   274 _P1_1	=	0x0091
                           000092   275 G$P1_2$0$0 == 0x0092
                           000092   276 _P1_2	=	0x0092
                           000093   277 G$P1_3$0$0 == 0x0093
                           000093   278 _P1_3	=	0x0093
                           000094   279 G$P1_4$0$0 == 0x0094
                           000094   280 _P1_4	=	0x0094
                           000095   281 G$P1_5$0$0 == 0x0095
                           000095   282 _P1_5	=	0x0095
                           000096   283 G$P1_6$0$0 == 0x0096
                           000096   284 _P1_6	=	0x0096
                           000097   285 G$P1_7$0$0 == 0x0097
                           000097   286 _P1_7	=	0x0097
                           000098   287 G$RI$0$0 == 0x0098
                           000098   288 _RI	=	0x0098
                           000099   289 G$TI$0$0 == 0x0099
                           000099   290 _TI	=	0x0099
                           00009A   291 G$RB8$0$0 == 0x009a
                           00009A   292 _RB8	=	0x009a
                           00009B   293 G$TB8$0$0 == 0x009b
                           00009B   294 _TB8	=	0x009b
                           00009C   295 G$REN$0$0 == 0x009c
                           00009C   296 _REN	=	0x009c
                           00009D   297 G$SM2$0$0 == 0x009d
                           00009D   298 _SM2	=	0x009d
                           00009E   299 G$SM1$0$0 == 0x009e
                           00009E   300 _SM1	=	0x009e
                           00009F   301 G$SM0$0$0 == 0x009f
                           00009F   302 _SM0	=	0x009f
                           0000A0   303 G$P2_0$0$0 == 0x00a0
                           0000A0   304 _P2_0	=	0x00a0
                           0000A1   305 G$P2_1$0$0 == 0x00a1
                           0000A1   306 _P2_1	=	0x00a1
                           0000A2   307 G$P2_2$0$0 == 0x00a2
                           0000A2   308 _P2_2	=	0x00a2
                           0000A3   309 G$P2_3$0$0 == 0x00a3
                           0000A3   310 _P2_3	=	0x00a3
                           0000A4   311 G$P2_4$0$0 == 0x00a4
                           0000A4   312 _P2_4	=	0x00a4
                           0000A5   313 G$P2_5$0$0 == 0x00a5
                           0000A5   314 _P2_5	=	0x00a5
                           0000A6   315 G$P2_6$0$0 == 0x00a6
                           0000A6   316 _P2_6	=	0x00a6
                           0000A7   317 G$P2_7$0$0 == 0x00a7
                           0000A7   318 _P2_7	=	0x00a7
                           0000A8   319 G$EX0$0$0 == 0x00a8
                           0000A8   320 _EX0	=	0x00a8
                           0000A9   321 G$ET0$0$0 == 0x00a9
                           0000A9   322 _ET0	=	0x00a9
                           0000AA   323 G$EX1$0$0 == 0x00aa
                           0000AA   324 _EX1	=	0x00aa
                           0000AB   325 G$ET1$0$0 == 0x00ab
                           0000AB   326 _ET1	=	0x00ab
                           0000AC   327 G$ES$0$0 == 0x00ac
                           0000AC   328 _ES	=	0x00ac
                           0000AF   329 G$EA$0$0 == 0x00af
                           0000AF   330 _EA	=	0x00af
                           0000B0   331 G$P3_0$0$0 == 0x00b0
                           0000B0   332 _P3_0	=	0x00b0
                           0000B1   333 G$P3_1$0$0 == 0x00b1
                           0000B1   334 _P3_1	=	0x00b1
                           0000B2   335 G$P3_2$0$0 == 0x00b2
                           0000B2   336 _P3_2	=	0x00b2
                           0000B3   337 G$P3_3$0$0 == 0x00b3
                           0000B3   338 _P3_3	=	0x00b3
                           0000B4   339 G$P3_4$0$0 == 0x00b4
                           0000B4   340 _P3_4	=	0x00b4
                           0000B5   341 G$P3_5$0$0 == 0x00b5
                           0000B5   342 _P3_5	=	0x00b5
                           0000B6   343 G$P3_6$0$0 == 0x00b6
                           0000B6   344 _P3_6	=	0x00b6
                           0000B7   345 G$P3_7$0$0 == 0x00b7
                           0000B7   346 _P3_7	=	0x00b7
                           0000B0   347 G$RXD$0$0 == 0x00b0
                           0000B0   348 _RXD	=	0x00b0
                           0000B1   349 G$TXD$0$0 == 0x00b1
                           0000B1   350 _TXD	=	0x00b1
                           0000B2   351 G$INT0$0$0 == 0x00b2
                           0000B2   352 _INT0	=	0x00b2
                           0000B3   353 G$INT1$0$0 == 0x00b3
                           0000B3   354 _INT1	=	0x00b3
                           0000B4   355 G$T0$0$0 == 0x00b4
                           0000B4   356 _T0	=	0x00b4
                           0000B5   357 G$T1$0$0 == 0x00b5
                           0000B5   358 _T1	=	0x00b5
                           0000B6   359 G$WR$0$0 == 0x00b6
                           0000B6   360 _WR	=	0x00b6
                           0000B7   361 G$RD$0$0 == 0x00b7
                           0000B7   362 _RD	=	0x00b7
                           0000B8   363 G$PX0$0$0 == 0x00b8
                           0000B8   364 _PX0	=	0x00b8
                           0000B9   365 G$PT0$0$0 == 0x00b9
                           0000B9   366 _PT0	=	0x00b9
                           0000BA   367 G$PX1$0$0 == 0x00ba
                           0000BA   368 _PX1	=	0x00ba
                           0000BB   369 G$PT1$0$0 == 0x00bb
                           0000BB   370 _PT1	=	0x00bb
                           0000BC   371 G$PS$0$0 == 0x00bc
                           0000BC   372 _PS	=	0x00bc
                           0000D0   373 G$P$0$0 == 0x00d0
                           0000D0   374 _P	=	0x00d0
                           0000D1   375 G$F1$0$0 == 0x00d1
                           0000D1   376 _F1	=	0x00d1
                           0000D2   377 G$OV$0$0 == 0x00d2
                           0000D2   378 _OV	=	0x00d2
                           0000D3   379 G$RS0$0$0 == 0x00d3
                           0000D3   380 _RS0	=	0x00d3
                           0000D4   381 G$RS1$0$0 == 0x00d4
                           0000D4   382 _RS1	=	0x00d4
                           0000D5   383 G$F0$0$0 == 0x00d5
                           0000D5   384 _F0	=	0x00d5
                           0000D6   385 G$AC$0$0 == 0x00d6
                           0000D6   386 _AC	=	0x00d6
                           0000D7   387 G$CY$0$0 == 0x00d7
                           0000D7   388 _CY	=	0x00d7
                           0000B0   389 G$RxLed$0$0 == 0x00b0
                           0000B0   390 _RxLed	=	0x00b0
                           0000B1   391 G$TxBip$0$0 == 0x00b1
                           0000B1   392 _TxBip	=	0x00b1
                           0000B2   393 G$SwInt$0$0 == 0x00b2
                           0000B2   394 _SwInt	=	0x00b2
                           000090   395 G$S1D1$0$0 == 0x0090
                           000090   396 _S1D1	=	0x0090
                           000091   397 G$S2D2$0$0 == 0x0091
                           000091   398 _S2D2	=	0x0091
      0000B7                        399 	.org 0x00B7
                           0000B7   400 G$lcdCS$0$0==.
      0000B7                        401 _lcdCS::
      0000B7                        402 	.ds 1
                           000093   403 G$adcCS$0$0 == 0x0093
                           000093   404 _adcCS	=	0x0093
                           0000B4   405 G$adcCk$0$0 == 0x00b4
                           0000B4   406 _adcCk	=	0x00b4
                           0000B5   407 G$adcDt$0$0 == 0x00b5
                           0000B5   408 _adcDt	=	0x00b5
                           0000B4   409 G$DC$0$0 == 0x00b4
                           0000B4   410 _DC	=	0x00b4
                           0000B5   411 G$RW$0$0 == 0x00b5
                           0000B5   412 _RW	=	0x00b5
                                    413 ;--------------------------------------------------------
                                    414 ; overlayable register banks
                                    415 ;--------------------------------------------------------
                                    416 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        417 	.ds 8
                                    418 ;--------------------------------------------------------
                                    419 ; internal ram data
                                    420 ;--------------------------------------------------------
                                    421 	.area DSEG    (DATA)
                           000000   422 G$S1$0$0==.
      000022                        423 _S1::
      000022                        424 	.ds 1
                           000001   425 G$S2$0$0==.
      000023                        426 _S2::
      000023                        427 	.ds 1
                           000002   428 G$cont$0$0==.
      000024                        429 _cont::
      000024                        430 	.ds 1
                           000003   431 G$disp1$0$0==.
      000025                        432 _disp1::
      000025                        433 	.ds 1
                           000004   434 G$disp2$0$0==.
      000026                        435 _disp2::
      000026                        436 	.ds 1
                           000005   437 G$cnt100$0$0==.
      000027                        438 _cnt100::
      000027                        439 	.ds 1
                           000006   440 G$cnt200$0$0==.
      000028                        441 _cnt200::
      000028                        442 	.ds 1
                           000007   443 G$x50us$0$0==.
      000029                        444 _x50us::
      000029                        445 	.ds 1
                           000008   446 G$freq$0$0==.
      00002A                        447 _freq::
      00002A                        448 	.ds 1
                           000009   449 G$RxByte$0$0==.
      00002B                        450 _RxByte::
      00002B                        451 	.ds 1
                           00000A   452 G$TxByte$0$0==.
      00002C                        453 _TxByte::
      00002C                        454 	.ds 1
                           00000B   455 G$rRxB$0$0==.
      00002D                        456 _rRxB::
      00002D                        457 	.ds 1
                           00000C   458 G$wRxB$0$0==.
      00002E                        459 _wRxB::
      00002E                        460 	.ds 1
                           00000D   461 G$rTxB$0$0==.
      00002F                        462 _rTxB::
      00002F                        463 	.ds 1
                           00000E   464 G$wTxB$0$0==.
      000030                        465 _wTxB::
      000030                        466 	.ds 1
                           00000F   467 G$RxB$0$0==.
      000031                        468 _RxB::
      000031                        469 	.ds 16
                           00001F   470 G$TxB$0$0==.
      000041                        471 _TxB::
      000041                        472 	.ds 16
                           00002F   473 G$algs$0$0==.
      000051                        474 _algs::
      000051                        475 	.ds 5
                           000034   476 L3203_CtrlPID3.char2LCD$val$1$12==.
      000056                        477 _char2LCD_PARM_2:
      000056                        478 	.ds 1
                           000035   479 L3203_CtrlPID3.char2LCD$dot$1$12==.
      000057                        480 _char2LCD_PARM_3:
      000057                        481 	.ds 1
                           000036   482 L3203_CtrlPID3.algs2ser$asc0$1$27==.
      000058                        483 _algs2ser_PARM_2:
      000058                        484 	.ds 2
                           000038   485 L3203_CtrlPID3.algs2ser$dot$1$27==.
      00005A                        486 _algs2ser_PARM_3:
      00005A                        487 	.ds 1
                           000039   488 L3203_CtrlPID3.char2Ser$val$1$35==.
      00005B                        489 _char2Ser_PARM_2:
      00005B                        490 	.ds 1
                           00003A   491 L3203_CtrlPID3.char2Ser$dot$1$35==.
      00005C                        492 _char2Ser_PARM_3:
      00005C                        493 	.ds 1
                           00003B   494 L3203_CtrlPID3.int2Ser$val$1$37==.
      00005D                        495 _int2Ser_PARM_2:
      00005D                        496 	.ds 2
                           00003D   497 L3203_CtrlPID3.int2Ser$dot$1$37==.
      00005F                        498 _int2Ser_PARM_3:
      00005F                        499 	.ds 1
                           00003E   500 G$pid$0$0==.
      000060                        501 _pid::
      000060                        502 	.ds 3
                           000041   503 G$pwm$0$0==.
      000063                        504 _pwm::
      000063                        505 	.ds 1
                           000042   506 L3203_CtrlPID3.main$setup$1$47==.
      000064                        507 _main_setup_1_47:
      000064                        508 	.ds 1
                           000043   509 L3203_CtrlPID3.main$tempC$1$47==.
      000065                        510 _main_tempC_1_47:
      000065                        511 	.ds 1
                           000044   512 L3203_CtrlPID3.main$errAt$1$47==.
      000066                        513 _main_errAt_1_47:
      000066                        514 	.ds 1
                           000045   515 L3203_CtrlPID3.main$erAnt$1$47==.
      000067                        516 _main_erAnt_1_47:
      000067                        517 	.ds 1
                           000046   518 L3203_CtrlPID3.main$ctrlAt$1$47==.
      000068                        519 _main_ctrlAt_1_47:
      000068                        520 	.ds 2
                           000048   521 L3203_CtrlPID3.main$P$1$47==.
      00006A                        522 _main_P_1_47:
      00006A                        523 	.ds 2
                           00004A   524 L3203_CtrlPID3.main$I$1$47==.
      00006C                        525 _main_I_1_47:
      00006C                        526 	.ds 2
                           00004C   527 L3203_CtrlPID3.main$tempo$1$47==.
      00006E                        528 _main_tempo_1_47:
      00006E                        529 	.ds 2
                                    530 ;--------------------------------------------------------
                                    531 ; overlayable items in internal ram 
                                    532 ;--------------------------------------------------------
                                    533 ;--------------------------------------------------------
                                    534 ; Stack segment in internal ram 
                                    535 ;--------------------------------------------------------
                                    536 	.area	SSEG
      0000B8                        537 __start__stack:
      0000B8                        538 	.ds	1
                                    539 
                                    540 ;--------------------------------------------------------
                                    541 ; indirectly addressable internal ram data
                                    542 ;--------------------------------------------------------
                                    543 	.area ISEG    (DATA)
                                    544 ;--------------------------------------------------------
                                    545 ; absolute internal ram data
                                    546 ;--------------------------------------------------------
                                    547 	.area IABS    (ABS,DATA)
                                    548 	.area IABS    (ABS,DATA)
                                    549 ;--------------------------------------------------------
                                    550 ; bit data
                                    551 ;--------------------------------------------------------
                                    552 	.area BSEG    (BIT)
                           000000   553 G$umSeg$0$0==.
      000000                        554 _umSeg::
      000000                        555 	.ds 1
                           000001   556 G$som$0$0==.
      000001                        557 _som::
      000001                        558 	.ds 1
                           000002   559 G$bip$0$0==.
      000002                        560 _bip::
      000002                        561 	.ds 1
                           000003   562 G$tip$0$0==.
      000003                        563 _tip::
      000003                        564 	.ds 1
                           000004   565 G$RxFlag$0$0==.
      000004                        566 _RxFlag::
      000004                        567 	.ds 1
                           000005   568 G$TxFlag$0$0==.
      000005                        569 _TxFlag::
      000005                        570 	.ds 1
                           000006   571 G$Txing$0$0==.
      000006                        572 _Txing::
      000006                        573 	.ds 1
                           000007   574 G$ad1On$0$0==.
      000007                        575 _ad1On::
      000007                        576 	.ds 1
                           000008   577 G$ad2On$0$0==.
      000008                        578 _ad2On::
      000008                        579 	.ds 1
                           000009   580 G$Ch01$0$0==.
      000009                        581 _Ch01::
      000009                        582 	.ds 1
                           00000A   583 G$useBuf$0$0==.
      00000A                        584 _useBuf::
      00000A                        585 	.ds 1
                           00000B   586 L3203_CtrlPID3.wrLCD8$rs$1$8==.
      00000B                        587 _wrLCD8_PARM_1:
      00000B                        588 	.ds 1
                           00000C   589 L3203_CtrlPID3.wrLCD8$sloc0$1$0==.
      00000C                        590 _wrLCD8_sloc0_1_0:
      00000C                        591 	.ds 1
                           00000D   592 L3203_CtrlPID3.wrLCD4$rs$1$10==.
      00000D                        593 _wrLCD4_PARM_1:
      00000D                        594 	.ds 1
                           00000E   595 L3203_CtrlPID3.ajustPID$ajust$1$41==.
      00000E                        596 _ajustPID_ajust_1_41:
      00000E                        597 	.ds 1
                                    598 ;--------------------------------------------------------
                                    599 ; paged external ram data
                                    600 ;--------------------------------------------------------
                                    601 	.area PSEG    (PAG,XDATA)
                                    602 ;--------------------------------------------------------
                                    603 ; external ram data
                                    604 ;--------------------------------------------------------
                                    605 	.area XSEG    (XDATA)
                                    606 ;--------------------------------------------------------
                                    607 ; absolute external ram data
                                    608 ;--------------------------------------------------------
                                    609 	.area XABS    (ABS,XDATA)
                                    610 ;--------------------------------------------------------
                                    611 ; external initialized ram data
                                    612 ;--------------------------------------------------------
                                    613 	.area XISEG   (XDATA)
                                    614 	.area HOME    (CODE)
                                    615 	.area GSINIT0 (CODE)
                                    616 	.area GSINIT1 (CODE)
                                    617 	.area GSINIT2 (CODE)
                                    618 	.area GSINIT3 (CODE)
                                    619 	.area GSINIT4 (CODE)
                                    620 	.area GSINIT5 (CODE)
                                    621 	.area GSINIT  (CODE)
                                    622 	.area GSFINAL (CODE)
                                    623 	.area CSEG    (CODE)
                                    624 ;--------------------------------------------------------
                                    625 ; interrupt vector 
                                    626 ;--------------------------------------------------------
                                    627 	.area HOME    (CODE)
      000000                        628 __interrupt_vect:
      000000 02 00 29         [24]  629 	ljmp	__sdcc_gsinit_startup
      000003 02 00 CB         [24]  630 	ljmp	_ext_0
      000006                        631 	.ds	5
      00000B 02 00 EB         [24]  632 	ljmp	_timer_0
      00000E                        633 	.ds	5
      000013 32               [24]  634 	reti
      000014                        635 	.ds	7
      00001B 32               [24]  636 	reti
      00001C                        637 	.ds	7
      000023 02 02 E3         [24]  638 	ljmp	_serial
                                    639 ;--------------------------------------------------------
                                    640 ; global & static initialisations
                                    641 ;--------------------------------------------------------
                                    642 	.area HOME    (CODE)
                                    643 	.area GSINIT  (CODE)
                                    644 	.area GSFINAL (CODE)
                                    645 	.area GSINIT  (CODE)
                                    646 	.globl __sdcc_gsinit_startup
                                    647 	.globl __sdcc_program_startup
                                    648 	.globl __start__stack
                                    649 	.globl __mcs51_genXINIT
                                    650 	.globl __mcs51_genXRAMCLEAR
                                    651 	.globl __mcs51_genRAMCLEAR
                           000000   652 	C$uRTOS_2.21.h$38$1$47 ==.
                                    653 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:38: unsigned char S1=0;             //R1 estado de S1
      000082 75 22 00         [24]  654 	mov	_S1,#0x00
                           000003   655 	C$uRTOS_2.21.h$39$1$47 ==.
                                    656 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:39: unsigned char S2=0;             //R2 estado de S2
      000085 75 23 00         [24]  657 	mov	_S2,#0x00
                           000006   658 	C$uRTOS_2.21.h$40$1$47 ==.
                                    659 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:40: unsigned char cont=0;           //R3 N x 50µs
      000088 75 24 00         [24]  660 	mov	_cont,#0x00
                           000009   661 	C$uRTOS_2.21.h$41$1$47 ==.
                                    662 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:41: unsigned char disp1=0xFF;       //R4 7seg MSD
      00008B 75 25 FF         [24]  663 	mov	_disp1,#0xff
                           00000C   664 	C$uRTOS_2.21.h$42$1$47 ==.
                                    665 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:42: unsigned char disp2=0xFF;       //R5 7seg LSD
      00008E 75 26 FF         [24]  666 	mov	_disp2,#0xff
                           00000F   667 	C$uRTOS_2.21.h$43$1$47 ==.
                                    668 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:43: unsigned char cnt100=100;       //R6 100x10ms=1s
      000091 75 27 64         [24]  669 	mov	_cnt100,#0x64
                           000012   670 	C$uRTOS_2.21.h$44$1$47 ==.
                                    671 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:44: unsigned char cnt200=200;       //R7 200 int's
      000094 75 28 C8         [24]  672 	mov	_cnt200,#0xc8
                           000015   673 	C$uRTOS_2.21.h$46$1$47 ==.
                                    674 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:46: unsigned char freq=8;           //R9 fBip=1/(2*50*freq)
      000097 75 2A 08         [24]  675 	mov	_freq,#0x08
                           000018   676 	C$uRTOS_2.21.h$49$1$47 ==.
                                    677 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:49: unsigned char rRxB=0;           //tag leitura RxB
      00009A 75 2D 00         [24]  678 	mov	_rRxB,#0x00
                           00001B   679 	C$uRTOS_2.21.h$50$1$47 ==.
                                    680 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:50: unsigned char wRxB=0;           //tag escrita RxB
      00009D 75 2E 00         [24]  681 	mov	_wRxB,#0x00
                           00001E   682 	C$uRTOS_2.21.h$51$1$47 ==.
                                    683 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:51: unsigned char rTxB=0;           //tag leitura TxB
      0000A0 75 2F 00         [24]  684 	mov	_rTxB,#0x00
                           000021   685 	C$uRTOS_2.21.h$52$1$47 ==.
                                    686 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:52: unsigned char wTxB=0;           //tag escrita TxB
      0000A3 75 30 00         [24]  687 	mov	_wTxB,#0x00
                           000024   688 	C$3203_CtrlPID3.c$10$1$47 ==.
                                    689 ;	3203_CtrlPID3.c:10: unsigned char pid[3]={0,0,0};
      0000A6 75 60 00         [24]  690 	mov	_pid,#0x00
      0000A9 75 61 00         [24]  691 	mov	(_pid + 0x0001),#0x00
      0000AC 75 62 00         [24]  692 	mov	(_pid + 0x0002),#0x00
                           00002D   693 	C$3203_CtrlPID3.c$11$1$47 ==.
                                    694 ;	3203_CtrlPID3.c:11: unsigned char pwm=0;            
      0000AF 75 63 00         [24]  695 	mov	_pwm,#0x00
                           000030   696 	C$uRTOS_2.21.h$27$1$47 ==.
                                    697 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:27: volatile __bit umSeg=0;         //1seg completo
      0000B2 C2 00            [12]  698 	clr	_umSeg
                           000032   699 	C$uRTOS_2.21.h$28$1$47 ==.
                                    700 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:28: __bit som=0;                    //som ligado
      0000B4 C2 01            [12]  701 	clr	_som
                           000034   702 	C$uRTOS_2.21.h$29$1$47 ==.
                                    703 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:29: __bit bip=0;                    //bip ligado
      0000B6 C2 02            [12]  704 	clr	_bip
                           000036   705 	C$uRTOS_2.21.h$30$1$47 ==.
                                    706 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:30: __bit tip=0;                    //trava do bip1
      0000B8 C2 03            [12]  707 	clr	_tip
                           000038   708 	C$uRTOS_2.21.h$31$1$47 ==.
                                    709 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:31: __bit RxFlag=0;                 //rxBuff vazio
      0000BA C2 04            [12]  710 	clr	_RxFlag
                           00003A   711 	C$uRTOS_2.21.h$32$1$47 ==.
                                    712 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:32: __bit TxFlag=1;                 //txBuff vazio
      0000BC D2 05            [12]  713 	setb	_TxFlag
                           00003C   714 	C$uRTOS_2.21.h$33$1$47 ==.
                                    715 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:33: __bit Txing=0;                  //enviando do buffer
      0000BE C2 06            [12]  716 	clr	_Txing
                           00003E   717 	C$uRTOS_2.21.h$34$1$47 ==.
                                    718 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:34: __bit ad1On=0;                  //ADC1 habilitado
      0000C0 C2 07            [12]  719 	clr	_ad1On
                           000040   720 	C$uRTOS_2.21.h$35$1$47 ==.
                                    721 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:35: __bit ad2On=0;                  //ADC2 habilitado
      0000C2 C2 08            [12]  722 	clr	_ad2On
                           000042   723 	C$uRTOS_2.21.h$37$1$47 ==.
                                    724 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:37: __bit useBuf=0;                 //=1 usa RxB
      0000C4 C2 0A            [12]  725 	clr	_useBuf
                           000044   726 	C$uRTOS_2.21.h$20$1$47 ==.
                                    727 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:20: volatile __sbit __at (0xB7) lcdCS=0;//P3.7 CS   LCD
      0000C6 C2 B7            [12]  728 	clr	_lcdCS
                                    729 	.area GSFINAL (CODE)
      0000C8 02 00 26         [24]  730 	ljmp	__sdcc_program_startup
                                    731 ;--------------------------------------------------------
                                    732 ; Home
                                    733 ;--------------------------------------------------------
                                    734 	.area HOME    (CODE)
                                    735 	.area HOME    (CODE)
      000026                        736 __sdcc_program_startup:
      000026 02 04 D6         [24]  737 	ljmp	_main
                                    738 ;	return from main will return to caller
                                    739 ;--------------------------------------------------------
                                    740 ; code
                                    741 ;--------------------------------------------------------
                                    742 	.area CSEG    (CODE)
                                    743 ;------------------------------------------------------------
                                    744 ;Allocation info for local variables in function 'ext_0'
                                    745 ;------------------------------------------------------------
                           000000   746 	G$ext_0$0$0 ==.
                           000000   747 	C$uRTOS_2.21.h$76$0$0 ==.
                                    748 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:76: void ext_0 (void) __interrupt(0){
                                    749 ;	-----------------------------------------
                                    750 ;	 function ext_0
                                    751 ;	-----------------------------------------
      0000CB                        752 _ext_0:
                           000007   753 	ar7 = 0x07
                           000006   754 	ar6 = 0x06
                           000005   755 	ar5 = 0x05
                           000004   756 	ar4 = 0x04
                           000003   757 	ar3 = 0x03
                           000002   758 	ar2 = 0x02
                           000001   759 	ar1 = 0x01
                           000000   760 	ar0 = 0x00
      0000CB C0 E0            [24]  761 	push	acc
      0000CD C0 D0            [24]  762 	push	psw
                           000004   763 	C$uRTOS_2.21.h$77$1$2 ==.
                                    764 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:77: EX0=0;
      0000CF C2 A8            [12]  765 	clr	_EX0
                           000006   766 	C$uRTOS_2.21.h$78$1$2 ==.
                                    767 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:78: if(!S1D1){
      0000D1 20 90 0A         [24]  768 	jb	_S1D1,00106$
                           000009   769 	C$uRTOS_2.21.h$79$2$3 ==.
                                    770 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:79: if (S1<2) S1++;
      0000D4 74 FE            [12]  771 	mov	a,#0x100 - 0x02
      0000D6 25 22            [12]  772 	add	a,_S1
      0000D8 40 0C            [24]  773 	jc	00108$
      0000DA 05 22            [12]  774 	inc	_S1
      0000DC 80 08            [24]  775 	sjmp	00108$
      0000DE                        776 00106$:
                           000013   777 	C$uRTOS_2.21.h$82$2$4 ==.
                                    778 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:82: if (S2<2) S2++;
      0000DE 74 FE            [12]  779 	mov	a,#0x100 - 0x02
      0000E0 25 23            [12]  780 	add	a,_S2
      0000E2 40 02            [24]  781 	jc	00108$
      0000E4 05 23            [12]  782 	inc	_S2
      0000E6                        783 00108$:
      0000E6 D0 D0            [24]  784 	pop	psw
      0000E8 D0 E0            [24]  785 	pop	acc
                           00001F   786 	C$uRTOS_2.21.h$84$1$2 ==.
                           00001F   787 	XG$ext_0$0$0 ==.
      0000EA 32               [24]  788 	reti
                                    789 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    790 ;	eliminated unneeded push/pop dpl
                                    791 ;	eliminated unneeded push/pop dph
                                    792 ;	eliminated unneeded push/pop b
                                    793 ;------------------------------------------------------------
                                    794 ;Allocation info for local variables in function 'timer_0'
                                    795 ;------------------------------------------------------------
                           000020   796 	G$timer_0$0$0 ==.
                           000020   797 	C$uRTOS_2.21.h$89$1$2 ==.
                                    798 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:89: void timer_0(void) __interrupt(1) __naked{
                                    799 ;	-----------------------------------------
                                    800 ;	 function timer_0
                                    801 ;	-----------------------------------------
      0000EB                        802 _timer_0:
                                    803 ;	naked function: no prologue.
                           000020   804 	C$uRTOS_2.21.h$129$1$6 ==.
                                    805 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:129: __endasm;
      0000EB C0 E0            [24]  806 	push	acc ;salva contexto
      0000ED C0 D0            [24]  807 	push	PSW ;
      0000EF D5 24 0B         [24]  808 	djnz	_cont, Cala ;gerar audio?
      0000F2 20 01 03         [24]  809 	jb	_som, Bipa ;tem som?
      0000F5 30 02 05         [24]  810 	jnb	_bip, Cala ;tem bip?
      0000F8                        811 	Bipa:
      0000F8 85 2A 24         [24]  812 	mov _cont, _freq ;tempo ½ ciclo
      0000FB B2 B1            [12]  813 	cpl	_TxBip ;½ ciclo som
      0000FD                        814 	Cala:
      0000FD D5 28 3F         [24]  815 	djnz _cnt200, RT1 ;10mS completo?
      000100 75 28 C8         [24]  816 	mov	_cnt200, #200 ;200*50us
      000103 D5 27 05         [24]  817 	djnz	_cnt100, Bip1 ;1 seg?
      000106 75 27 64         [24]  818 	mov	_cnt100, #100 ;recarga 100
      000109 D2 00            [12]  819 	setb	_umSeg ;sim, cmpl 1s
      00010B                        820 	Bip1:
      00010B 30 02 07         [24]  821 	jnb _bip, Mux ;se bip ligado
      00010E B2 03            [12]  822 	cpl	_tip ;|gera de 10ms|
      000110 20 03 02         [24]  823 	jb	_tip, Mux ;|a 19.95ms de|
      000113 C2 02            [12]  824 	clr	_bip ;|2*freq*50us.|
      000115                        825 	Mux:
      000115 20 90 11         [24]  826 	jb _S1D1, D2 ;disp1 ligado?
      000118                        827 	D1:
      000118 74 02            [12]  828 	mov a, #0x02 ;2=filtrada
      00011A B5 22 06         [24]  829 	cjne	a, _S1, D1a ;filtrada?
      00011D 30 B2 03         [24]  830 	jnb	_SwInt, D1a ;liberada?
      000120 75 22 03         [24]  831 	mov	_S1, #0x03 ;sim,sobe flag
      000123                        832 	D1a:
      000123 D2 90            [12]  833 	setb _S1D1 ;S1 deshab
      000125 C2 91            [12]  834 	clr	_S2D2 ;S2 hab
      000127 80 0F            [24]  835 	sjmp	RT2 ;recarga/sai
      000129                        836 	D2:
      000129 74 02            [12]  837 	mov a, #0x02
      00012B B5 23 06         [24]  838 	cjne	a, _S2, D2a ;filtrada?
      00012E 30 B2 03         [24]  839 	jnb	_SwInt, D2a ;liberada?
      000131 75 23 03         [24]  840 	mov	_S2, #0x03 ;sim,sobe flag
      000134                        841 	D2a:
      000134 D2 91            [12]  842 	setb _S2D2 ;S2 deshab
      000136 C2 90            [12]  843 	clr	_S1D1 ;S1 hab
                                    844 ;
      000138                        845 	RT2:
      000138 D2 A8            [12]  846 	setb _EX0 ;hab. chaves
      00013A 12 04 36         [24]  847 	lcall	_RTproc_2 ;a cada 10ms
      00013D 80 03            [24]  848 	sjmp	SAI
      00013F                        849 	RT1:
      00013F 12 04 2E         [24]  850 	lcall _RTproc_1 ;a cada 50µs
      000142                        851 	SAI:
      000142 D0 D0            [24]  852 	pop PSW ;recup. contexto
      000144 D0 E0            [24]  853 	pop	acc ;
      000146 32               [24]  854 	reti
                                    855 ;	naked function: no epilogue.
                           00007C   856 	C$uRTOS_2.21.h$130$1$6 ==.
                           00007C   857 	XG$timer_0$0$0 ==.
                                    858 ;------------------------------------------------------------
                                    859 ;Allocation info for local variables in function 'delay50'
                                    860 ;------------------------------------------------------------
                           00007C   861 	G$delay50$0$0 ==.
                           00007C   862 	C$uRTOS_2.21.h$134$1$6 ==.
                                    863 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:134: void delay50() __naked{
                                    864 ;	-----------------------------------------
                                    865 ;	 function delay50
                                    866 ;	-----------------------------------------
      000147                        867 _delay50:
                                    868 ;	naked function: no prologue.
                           00007C   869 	C$uRTOS_2.21.h$148$1$7 ==.
                                    870 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:148: __endasm;
      000147 C0 E0            [24]  871 	push	acc ;salva contexto
      000149 C0 D0            [24]  872 	push	PSW ;
      00014B E5 28            [12]  873 	mov	a, _cnt200 ;tempo atual
      00014D C3               [12]  874 	clr	c
      00014E 95 29            [12]  875 	subb	a, _x50us ;prox tempo
      000150 50 02            [24]  876 	jnc	Po ;negativo?
      000152 24 C8            [12]  877 	add	a, #200 ;soma 200
      000154                        878 	Po:
      000154 04               [12]  879 	inc a ;nunca zero
      000155                        880 	Ps:
      000155 B5 28 FD         [24]  881 	cjne a, _cnt200, Ps ;espera chegar
      000158 D0 D0            [24]  882 	pop	PSW ;recup. contexto
      00015A D0 E0            [24]  883 	pop	acc ;
      00015C 22               [24]  884 	ret
                                    885 ;	naked function: no epilogue.
                           000092   886 	C$uRTOS_2.21.h$149$1$7 ==.
                           000092   887 	XG$delay50$0$0 ==.
                                    888 ;------------------------------------------------------------
                                    889 ;Allocation info for local variables in function 'wrLCD8'
                                    890 ;------------------------------------------------------------
                                    891 ;val                       Allocated to registers r7 
                                    892 ;------------------------------------------------------------
                           000092   893 	G$wrLCD8$0$0 ==.
                           000092   894 	C$uRTOS_2.21.h$153$1$7 ==.
                                    895 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:153: void wrLCD8(__bit rs, char val){//comando p/ LCD
                                    896 ;	-----------------------------------------
                                    897 ;	 function wrLCD8
                                    898 ;	-----------------------------------------
      00015D                        899 _wrLCD8:
      00015D AF 82            [24]  900 	mov	r7,dpl
                           000094   901 	C$uRTOS_2.21.h$154$1$9 ==.
                                    902 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:154: DC=rs; RW=0;                //1dado 0cmd, escrever
      00015F A2 0B            [12]  903 	mov	c,_wrLCD8_PARM_1
      000161 92 B4            [24]  904 	mov	_DC,c
      000163 C2 B5            [12]  905 	clr	_RW
                           00009A   906 	C$uRTOS_2.21.h$155$1$9 ==.
                                    907 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:155: P1_4=(val&0x10); P1_5=(val&0x20);
      000165 EF               [12]  908 	mov	a,r7
      000166 A2 E4            [12]  909 	mov	c,acc[4]
      000168 92 0C            [24]  910 	mov  _wrLCD8_sloc0_1_0,c
      00016A 92 94            [24]  911 	mov	_P1_4,c
      00016C EF               [12]  912 	mov	a,r7
      00016D A2 E5            [12]  913 	mov	c,acc[5]
      00016F 92 0C            [24]  914 	mov  _wrLCD8_sloc0_1_0,c
      000171 92 95            [24]  915 	mov	_P1_5,c
                           0000A8   916 	C$uRTOS_2.21.h$156$1$9 ==.
                                    917 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:156: P1_6=(val&0x40); P1_7=(val&0x80);
      000173 EF               [12]  918 	mov	a,r7
      000174 A2 E6            [12]  919 	mov	c,acc[6]
      000176 92 0C            [24]  920 	mov  _wrLCD8_sloc0_1_0,c
      000178 92 96            [24]  921 	mov	_P1_6,c
      00017A EF               [12]  922 	mov	a,r7
      00017B 33               [12]  923 	rlc	a
      00017C 92 0C            [24]  924 	mov  _wrLCD8_sloc0_1_0,c
      00017E 92 97            [24]  925 	mov	_P1_7,c
                           0000B5   926 	C$uRTOS_2.21.h$157$1$9 ==.
                                    927 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:157: x50us=2; delay50();         //Tas=100us
      000180 75 29 02         [24]  928 	mov	_x50us,#0x02
      000183 12 01 47         [24]  929 	lcall	_delay50
                           0000BB   930 	C$uRTOS_2.21.h$158$1$9 ==.
                                    931 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:158: lcdCS=1;                    //para gravar
      000186 D2 B7            [12]  932 	setb	_lcdCS
                           0000BD   933 	C$uRTOS_2.21.h$159$1$9 ==.
                                    934 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:159: x50us=8; delay50();         //PWeh=400us
      000188 75 29 08         [24]  935 	mov	_x50us,#0x08
      00018B 12 01 47         [24]  936 	lcall	_delay50
                           0000C3   937 	C$uRTOS_2.21.h$160$1$9 ==.
                                    938 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:160: lcdCS=0;                    //grava
      00018E C2 B7            [12]  939 	clr	_lcdCS
                           0000C5   940 	C$uRTOS_2.21.h$161$1$9 ==.
                                    941 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:161: x50us=4; delay50();         //Tah=200us
      000190 75 29 04         [24]  942 	mov	_x50us,#0x04
      000193 12 01 47         [24]  943 	lcall	_delay50
                           0000CB   944 	C$uRTOS_2.21.h$162$1$9 ==.
                                    945 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:162: RW=1; DC=1;                 //linhas ADC em 1
      000196 D2 B5            [12]  946 	setb	_RW
      000198 D2 B4            [12]  947 	setb	_DC
                           0000CF   948 	C$uRTOS_2.21.h$163$1$9 ==.
                           0000CF   949 	XG$wrLCD8$0$0 ==.
      00019A 22               [24]  950 	ret
                                    951 ;------------------------------------------------------------
                                    952 ;Allocation info for local variables in function 'wrLCD4'
                                    953 ;------------------------------------------------------------
                                    954 ;val                       Allocated to registers r7 
                                    955 ;temp                      Allocated to registers r6 
                                    956 ;------------------------------------------------------------
                           0000D0   957 	G$wrLCD4$0$0 ==.
                           0000D0   958 	C$uRTOS_2.21.h$167$1$9 ==.
                                    959 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:167: void wrLCD4(__bit rs, char val){//comando p/ LCD
                                    960 ;	-----------------------------------------
                                    961 ;	 function wrLCD4
                                    962 ;	-----------------------------------------
      00019B                        963 _wrLCD4:
      00019B AF 82            [24]  964 	mov	r7,dpl
                           0000D2   965 	C$uRTOS_2.21.h$169$1$11 ==.
                                    966 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:169: temp=(val&0xF0);
      00019D 74 F0            [12]  967 	mov	a,#0xf0
      00019F 5F               [12]  968 	anl	a,r7
      0001A0 FE               [12]  969 	mov	r6,a
                           0000D6   970 	C$uRTOS_2.21.h$170$1$11 ==.
                                    971 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:170: wrLCD8(rs, temp);           //repassa p wrLCD8
      0001A1 A2 0D            [12]  972 	mov	c,_wrLCD4_PARM_1
      0001A3 92 0B            [24]  973 	mov	_wrLCD8_PARM_1,c
      0001A5 8E 82            [24]  974 	mov	dpl,r6
      0001A7 C0 07            [24]  975 	push	ar7
      0001A9 12 01 5D         [24]  976 	lcall	_wrLCD8
      0001AC D0 07            [24]  977 	pop	ar7
                           0000E3   978 	C$uRTOS_2.21.h$171$1$11 ==.
                                    979 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:171: temp=((val<<4)&0xF0);       //pega low nible
      0001AE EF               [12]  980 	mov	a,r7
      0001AF C4               [12]  981 	swap	a
      0001B0 54 F0            [12]  982 	anl	a,#0xf0
      0001B2 FF               [12]  983 	mov	r7,a
      0001B3 74 F0            [12]  984 	mov	a,#0xf0
      0001B5 5F               [12]  985 	anl	a,r7
      0001B6 FE               [12]  986 	mov	r6,a
                           0000EC   987 	C$uRTOS_2.21.h$172$1$11 ==.
                                    988 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:172: wrLCD8(rs, temp);           //repassa p wrLCD8
      0001B7 A2 0D            [12]  989 	mov	c,_wrLCD4_PARM_1
      0001B9 92 0B            [24]  990 	mov	_wrLCD8_PARM_1,c
      0001BB 8E 82            [24]  991 	mov	dpl,r6
      0001BD 12 01 5D         [24]  992 	lcall	_wrLCD8
                           0000F5   993 	C$uRTOS_2.21.h$173$1$11 ==.
                           0000F5   994 	XG$wrLCD4$0$0 ==.
      0001C0 22               [24]  995 	ret
                                    996 ;------------------------------------------------------------
                                    997 ;Allocation info for local variables in function 'char2LCD'
                                    998 ;------------------------------------------------------------
                                    999 ;val                       Allocated with name '_char2LCD_PARM_2'
                                   1000 ;dot                       Allocated with name '_char2LCD_PARM_3'
                                   1001 ;ddRam                     Allocated to registers r7 
                                   1002 ;i                         Allocated to registers r7 
                                   1003 ;------------------------------------------------------------
                           0000F6  1004 	G$char2LCD$0$0 ==.
                           0000F6  1005 	C$uRTOS_2.21.h$178$1$11 ==.
                                   1006 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:178: void char2LCD(char ddRam, unsigned char val, char dot){
                                   1007 ;	-----------------------------------------
                                   1008 ;	 function char2LCD
                                   1009 ;	-----------------------------------------
      0001C1                       1010 _char2LCD:
      0001C1 AF 82            [24] 1011 	mov	r7,dpl
                           0000F8  1012 	C$uRTOS_2.21.h$180$1$13 ==.
                                   1013 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:180: wrLCD4(comand,ddRam);           //posição número
      0001C3 C2 0D            [12] 1014 	clr	_wrLCD4_PARM_1
      0001C5 8F 82            [24] 1015 	mov	dpl,r7
      0001C7 12 01 9B         [24] 1016 	lcall	_wrLCD4
                           0000FF  1017 	C$uRTOS_2.21.h$181$1$13 ==.
                                   1018 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:181: algs[0]=0x30+(val/100);
      0001CA 75 F0 64         [24] 1019 	mov	b,#0x64
      0001CD E5 56            [12] 1020 	mov	a,_char2LCD_PARM_2
      0001CF 84               [48] 1021 	div	ab
      0001D0 24 30            [12] 1022 	add	a,#0x30
      0001D2 F5 51            [12] 1023 	mov	_algs,a
                           000109  1024 	C$uRTOS_2.21.h$182$1$13 ==.
                                   1025 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:182: val=val%100;
      0001D4 75 F0 64         [24] 1026 	mov	b,#0x64
      0001D7 E5 56            [12] 1027 	mov	a,_char2LCD_PARM_2
      0001D9 84               [48] 1028 	div	ab
      0001DA 85 F0 56         [24] 1029 	mov	_char2LCD_PARM_2,b
                           000112  1030 	C$uRTOS_2.21.h$183$1$13 ==.
                                   1031 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:183: algs[1]=0x30+(val/10);
      0001DD 75 F0 0A         [24] 1032 	mov	b,#0x0a
      0001E0 E5 56            [12] 1033 	mov	a,_char2LCD_PARM_2
      0001E2 84               [48] 1034 	div	ab
      0001E3 24 30            [12] 1035 	add	a,#0x30
      0001E5 F5 52            [12] 1036 	mov	(_algs + 0x0001),a
                           00011C  1037 	C$uRTOS_2.21.h$184$1$13 ==.
                                   1038 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:184: algs[2]=0x30+(val%10);
      0001E7 75 F0 0A         [24] 1039 	mov	b,#0x0a
      0001EA E5 56            [12] 1040 	mov	a,_char2LCD_PARM_2
      0001EC 84               [48] 1041 	div	ab
      0001ED E5 F0            [12] 1042 	mov	a,b
      0001EF 24 30            [12] 1043 	add	a,#0x30
      0001F1 F5 53            [12] 1044 	mov	(_algs + 0x0002),a
                           000128  1045 	C$uRTOS_2.21.h$185$1$13 ==.
                                   1046 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:185: for(i=0;i<3;i++){
      0001F3 7F 00            [12] 1047 	mov	r7,#0x00
      0001F5                       1048 00104$:
                           00012A  1049 	C$uRTOS_2.21.h$186$2$14 ==.
                                   1050 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:186: if(i==dot)wrLCD4(letra, 46);
      0001F5 EF               [12] 1051 	mov	a,r7
      0001F6 B5 57 0C         [24] 1052 	cjne	a,_char2LCD_PARM_3,00102$
      0001F9 D2 0D            [12] 1053 	setb	_wrLCD4_PARM_1
      0001FB 75 82 2E         [24] 1054 	mov	dpl,#0x2e
      0001FE C0 07            [24] 1055 	push	ar7
      000200 12 01 9B         [24] 1056 	lcall	_wrLCD4
      000203 D0 07            [24] 1057 	pop	ar7
      000205                       1058 00102$:
                           00013A  1059 	C$uRTOS_2.21.h$187$2$14 ==.
                                   1060 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:187: wrLCD4(letra, algs[i]);     //coloca número
      000205 EF               [12] 1061 	mov	a,r7
      000206 24 51            [12] 1062 	add	a,#_algs
      000208 F9               [12] 1063 	mov	r1,a
      000209 87 82            [24] 1064 	mov	dpl,@r1
      00020B D2 0D            [12] 1065 	setb	_wrLCD4_PARM_1
      00020D C0 07            [24] 1066 	push	ar7
      00020F 12 01 9B         [24] 1067 	lcall	_wrLCD4
      000212 D0 07            [24] 1068 	pop	ar7
                           000149  1069 	C$uRTOS_2.21.h$185$1$13 ==.
                                   1070 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:185: for(i=0;i<3;i++){
      000214 0F               [12] 1071 	inc	r7
      000215 BF 03 00         [24] 1072 	cjne	r7,#0x03,00116$
      000218                       1073 00116$:
      000218 40 DB            [24] 1074 	jc	00104$
                           00014F  1075 	C$uRTOS_2.21.h$189$1$13 ==.
                           00014F  1076 	XG$char2LCD$0$0 ==.
      00021A 22               [24] 1077 	ret
                                   1078 ;------------------------------------------------------------
                                   1079 ;Allocation info for local variables in function 'iniLCD4'
                                   1080 ;------------------------------------------------------------
                                   1081 ;i                         Allocated to registers r7 
                                   1082 ;cmD                       Allocated to registers r6 
                                   1083 ;BF                        Allocated to registers 
                                   1084 ;------------------------------------------------------------
                           000150  1085 	G$iniLCD4$0$0 ==.
                           000150  1086 	C$uRTOS_2.21.h$193$1$13 ==.
                                   1087 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:193: void iniLCD4(){                 //inicializa LCD
                                   1088 ;	-----------------------------------------
                                   1089 ;	 function iniLCD4
                                   1090 ;	-----------------------------------------
      00021B                       1091 _iniLCD4:
                           000150  1092 	C$uRTOS_2.21.h$197$1$15 ==.
                                   1093 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:197: lcdCS=0;                    //seleciona LCD
      00021B C2 B7            [12] 1094 	clr	_lcdCS
                           000152  1095 	C$uRTOS_2.21.h$198$1$15 ==.
                                   1096 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:198: umSeg=0; cnt100=100;        //reinicia umSeg
      00021D C2 00            [12] 1097 	clr	_umSeg
      00021F 75 27 64         [24] 1098 	mov	_cnt100,#0x64
                           000157  1099 	C$uRTOS_2.21.h$199$1$15 ==.
                                   1100 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:199: while(!umSeg);              //para acomodar LCD
      000222                       1101 00101$:
                           000157  1102 	C$uRTOS_2.21.h$200$1$15 ==.
                                   1103 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:200: umSeg=0;
      000222 10 00 02         [24] 1104 	jbc	_umSeg,00163$
      000225 80 FB            [24] 1105 	sjmp	00101$
      000227                       1106 00163$:
                           00015C  1107 	C$uRTOS_2.21.h$201$1$15 ==.
                                   1108 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:201: wrLCD8(comand, 0x30);       //inicia em 8 bits
      000227 C2 0B            [12] 1109 	clr	_wrLCD8_PARM_1
      000229 75 82 30         [24] 1110 	mov	dpl,#0x30
      00022C 12 01 5D         [24] 1111 	lcall	_wrLCD8
                           000164  1112 	C$uRTOS_2.21.h$202$1$15 ==.
                                   1113 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:202: while(S1D1); while(S2D2);	//garante 10ms
      00022F                       1114 00104$:
      00022F 20 90 FD         [24] 1115 	jb	_S1D1,00104$
      000232                       1116 00107$:
      000232 20 91 FD         [24] 1117 	jb	_S2D2,00107$
                           00016A  1118 	C$uRTOS_2.21.h$203$1$15 ==.
                                   1119 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:203: wrLCD8(comand, 0x30);       //inicia em 8 bits
      000235 C2 0B            [12] 1120 	clr	_wrLCD8_PARM_1
      000237 75 82 30         [24] 1121 	mov	dpl,#0x30
      00023A 12 01 5D         [24] 1122 	lcall	_wrLCD8
                           000172  1123 	C$uRTOS_2.21.h$204$1$15 ==.
                                   1124 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:204: while(S1D1); while(S2D2);	//garante 10ms
      00023D                       1125 00110$:
      00023D 20 90 FD         [24] 1126 	jb	_S1D1,00110$
      000240                       1127 00113$:
      000240 20 91 FD         [24] 1128 	jb	_S2D2,00113$
                           000178  1129 	C$uRTOS_2.21.h$205$1$15 ==.
                                   1130 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:205: wrLCD8(comand, 0x30);       //inicia em 8 bits
      000243 C2 0B            [12] 1131 	clr	_wrLCD8_PARM_1
      000245 75 82 30         [24] 1132 	mov	dpl,#0x30
      000248 12 01 5D         [24] 1133 	lcall	_wrLCD8
                           000180  1134 	C$uRTOS_2.21.h$206$1$15 ==.
                                   1135 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:206: x50us=4; delay50();         //delay 200us
      00024B 75 29 04         [24] 1136 	mov	_x50us,#0x04
      00024E 12 01 47         [24] 1137 	lcall	_delay50
                           000186  1138 	C$uRTOS_2.21.h$207$1$15 ==.
                                   1139 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:207: wrLCD8(comand, 0x20);       //inicia em 8 bits
      000251 C2 0B            [12] 1140 	clr	_wrLCD8_PARM_1
      000253 75 82 20         [24] 1141 	mov	dpl,#0x20
      000256 12 01 5D         [24] 1142 	lcall	_wrLCD8
                           00018E  1143 	C$uRTOS_2.21.h$208$1$15 ==.
                                   1144 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:208: x50us=4; delay50();         //delay 200us
      000259 75 29 04         [24] 1145 	mov	_x50us,#0x04
      00025C 12 01 47         [24] 1146 	lcall	_delay50
                           000194  1147 	C$uRTOS_2.21.h$209$1$15 ==.
                                   1148 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:209: for(i=0;i<4;i++){           //cmd's 0 a 8'
      00025F 7F 00            [12] 1149 	mov	r7,#0x00
      000261                       1150 00123$:
                           000196  1151 	C$uRTOS_2.21.h$210$2$16 ==.
                                   1152 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:210: cmD=setLCD4[i];         // seleciona comando
      000261 EF               [12] 1153 	mov	a,r7
      000262 90 07 98         [24] 1154 	mov	dptr,#_setLCD4
      000265 93               [24] 1155 	movc	a,@a+dptr
      000266 FE               [12] 1156 	mov	r6,a
                           00019C  1157 	C$uRTOS_2.21.h$211$2$16 ==.
                                   1158 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:211: wrLCD4(comand, cmD);
      000267 C2 0D            [12] 1159 	clr	_wrLCD4_PARM_1
      000269 8E 82            [24] 1160 	mov	dpl,r6
      00026B C0 07            [24] 1161 	push	ar7
      00026D 12 01 9B         [24] 1162 	lcall	_wrLCD4
      000270 D0 07            [24] 1163 	pop	ar7
                           0001A7  1164 	C$uRTOS_2.21.h$212$2$16 ==.
                                   1165 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:212: while(S1D1);
      000272                       1166 00116$:
      000272 20 90 FD         [24] 1167 	jb	_S1D1,00116$
                           0001AA  1168 	C$uRTOS_2.21.h$213$2$16 ==.
                                   1169 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:213: while(S2D2);            //garante 10ms
      000275                       1170 00119$:
      000275 20 91 FD         [24] 1171 	jb	_S2D2,00119$
                           0001AD  1172 	C$uRTOS_2.21.h$209$1$15 ==.
                                   1173 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:209: for(i=0;i<4;i++){           //cmd's 0 a 8'
      000278 0F               [12] 1174 	inc	r7
      000279 BF 04 00         [24] 1175 	cjne	r7,#0x04,00170$
      00027C                       1176 00170$:
      00027C 40 E3            [24] 1177 	jc	00123$
                           0001B3  1178 	C$uRTOS_2.21.h$215$1$15 ==.
                           0001B3  1179 	XG$iniLCD4$0$0 ==.
      00027E 22               [24] 1180 	ret
                                   1181 ;------------------------------------------------------------
                                   1182 ;Allocation info for local variables in function 'inic'
                                   1183 ;------------------------------------------------------------
                           0001B4  1184 	G$inic$0$0 ==.
                           0001B4  1185 	C$uRTOS_2.21.h$219$1$15 ==.
                                   1186 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:219: void inic(void){
                                   1187 ;	-----------------------------------------
                                   1188 ;	 function inic
                                   1189 ;	-----------------------------------------
      00027F                       1190 _inic:
                           0001B4  1191 	C$uRTOS_2.21.h$220$1$18 ==.
                                   1192 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:220: PT0=1;                  //prioridade TC0
      00027F D2 B9            [12] 1193 	setb	_PT0
                           0001B6  1194 	C$uRTOS_2.21.h$221$1$18 ==.
                                   1195 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:221: IE=0x93;                //EA+ES+ET0+EX0
      000281 75 A8 93         [24] 1196 	mov	_IE,#0x93
                           0001B9  1197 	C$uRTOS_2.21.h$222$1$18 ==.
                                   1198 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:222: TMOD=0x22;              //TC0=TC1=modo2
      000284 75 89 22         [24] 1199 	mov	_TMOD,#0x22
                           0001BC  1200 	C$uRTOS_2.21.h$223$1$18 ==.
                                   1201 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:223: TL0=206;                //conta 50
      000287 75 8A CE         [24] 1202 	mov	_TL0,#0xce
                           0001BF  1203 	C$uRTOS_2.21.h$224$1$18 ==.
                                   1204 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:224: TH0=206;                //recarrega
      00028A 75 8C CE         [24] 1205 	mov	_TH0,#0xce
                           0001C2  1206 	C$uRTOS_2.21.h$225$1$18 ==.
                                   1207 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:225: TL1=243;                //conta 13
      00028D 75 8B F3         [24] 1208 	mov	_TL1,#0xf3
                           0001C5  1209 	C$uRTOS_2.21.h$226$1$18 ==.
                                   1210 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:226: TH1=243;                //recarrega
      000290 75 8D F3         [24] 1211 	mov	_TH1,#0xf3
                           0001C8  1212 	C$uRTOS_2.21.h$227$1$18 ==.
                                   1213 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:227: PCON=0x80;              //serial x2 (/16)
      000293 75 87 80         [24] 1214 	mov	_PCON,#0x80
                           0001CB  1215 	C$uRTOS_2.21.h$228$1$18 ==.
                                   1216 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:228: SCON=0xC8;              //serial modo 3
      000296 75 98 C8         [24] 1217 	mov	_SCON,#0xc8
                           0001CE  1218 	C$uRTOS_2.21.h$229$1$18 ==.
                                   1219 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:229: TR0=1;                  //liga tc0
      000299 D2 8C            [12] 1220 	setb	_TR0
                           0001D0  1221 	C$uRTOS_2.21.h$230$1$18 ==.
                                   1222 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:230: TR1=1;                  //liga tc1
      00029B D2 8E            [12] 1223 	setb	_TR1
                           0001D2  1224 	C$uRTOS_2.21.h$231$1$18 ==.
                                   1225 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/uRTOS_2.21.h:231: iniLCD4();              //inicializa LCD
      00029D 12 02 1B         [24] 1226 	lcall	_iniLCD4
                           0001D5  1227 	C$uRTOS_2.21.h$232$1$18 ==.
                           0001D5  1228 	XG$inic$0$0 ==.
      0002A0 22               [24] 1229 	ret
                                   1230 ;------------------------------------------------------------
                                   1231 ;Allocation info for local variables in function 'clockAD'
                                   1232 ;------------------------------------------------------------
                           0001D6  1233 	G$clockAD$0$0 ==.
                           0001D6  1234 	C$convAD08.h$10$1$18 ==.
                                   1235 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:10: void clockAD() __naked{
                                   1236 ;	-----------------------------------------
                                   1237 ;	 function clockAD
                                   1238 ;	-----------------------------------------
      0002A1                       1239 _clockAD:
                                   1240 ;	naked function: no prologue.
                           0001D6  1241 	C$convAD08.h$16$1$19 ==.
                                   1242 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:16: __endasm;
      0002A1 D2 B4            [12] 1243 	setb	_adcCk
      0002A3 D2 B4            [12] 1244 	setb	_adcCk
      0002A5 C2 B4            [12] 1245 	clr	_adcCk
      0002A7 22               [24] 1246 	ret
                                   1247 ;	naked function: no epilogue.
                           0001DD  1248 	C$convAD08.h$17$1$19 ==.
                           0001DD  1249 	XG$clockAD$0$0 ==.
                                   1250 ;------------------------------------------------------------
                                   1251 ;Allocation info for local variables in function 'convAD08'
                                   1252 ;------------------------------------------------------------
                                   1253 ;sample                    Allocated to registers r7 
                                   1254 ;i                         Allocated to registers r6 
                                   1255 ;------------------------------------------------------------
                           0001DD  1256 	G$convAD08$0$0 ==.
                           0001DD  1257 	C$convAD08.h$21$1$19 ==.
                                   1258 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:21: unsigned char convAD08(){
                                   1259 ;	-----------------------------------------
                                   1260 ;	 function convAD08
                                   1261 ;	-----------------------------------------
      0002A8                       1262 _convAD08:
                           0001DD  1263 	C$convAD08.h$22$1$19 ==.
                                   1264 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:22: unsigned char sample=0;	//amostra
      0002A8 7F 00            [12] 1265 	mov	r7,#0x00
                           0001DF  1266 	C$convAD08.h$24$1$20 ==.
                                   1267 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:24: adcCk=0; adcCS=0;
      0002AA C2 B4            [12] 1268 	clr	_adcCk
      0002AC C2 93            [12] 1269 	clr	_adcCS
                           0001E3  1270 	C$convAD08.h$25$1$20 ==.
                                   1271 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:25: adcDt=1;			//control bit
      0002AE D2 B5            [12] 1272 	setb	_adcDt
                           0001E5  1273 	C$convAD08.h$26$1$20 ==.
                                   1274 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:26: clockAD();			//start bit
      0002B0 12 02 A1         [24] 1275 	lcall	_clockAD
                           0001E8  1276 	C$convAD08.h$27$1$20 ==.
                                   1277 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:27: clockAD();			//single
      0002B3 12 02 A1         [24] 1278 	lcall	_clockAD
                           0001EB  1279 	C$convAD08.h$28$1$20 ==.
                                   1280 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:28: adcDt=Ch01;			//canal adc
      0002B6 A2 09            [12] 1281 	mov	c,_Ch01
      0002B8 92 B5            [24] 1282 	mov	_adcDt,c
                           0001EF  1283 	C$convAD08.h$29$1$20 ==.
                                   1284 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:29: clockAD();
      0002BA 12 02 A1         [24] 1285 	lcall	_clockAD
                           0001F2  1286 	C$convAD08.h$30$1$20 ==.
                                   1287 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:30: adcDt=1;   			//deixa 3st
      0002BD D2 B5            [12] 1288 	setb	_adcDt
                           0001F4  1289 	C$convAD08.h$31$1$20 ==.
                                   1290 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:31: clockAD();			//start bit
      0002BF 12 02 A1         [24] 1291 	lcall	_clockAD
                           0001F7  1292 	C$convAD08.h$32$1$20 ==.
                                   1293 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:32: for(i=8;i>0;i--){
      0002C2 7E 08            [12] 1294 	mov	r6,#0x08
      0002C4                       1295 00103$:
                           0001F9  1296 	C$convAD08.h$33$2$21 ==.
                                   1297 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:33: sample=((sample<<1)|adcDt);
      0002C4 EF               [12] 1298 	mov	a,r7
      0002C5 2F               [12] 1299 	add	a,r7
      0002C6 FD               [12] 1300 	mov	r5,a
      0002C7 A2 B5            [12] 1301 	mov	c,_adcDt
      0002C9 E4               [12] 1302 	clr	a
      0002CA 33               [12] 1303 	rlc	a
      0002CB FC               [12] 1304 	mov	r4,a
      0002CC 4D               [12] 1305 	orl	a,r5
      0002CD FF               [12] 1306 	mov	r7,a
                           000203  1307 	C$convAD08.h$34$2$21 ==.
                                   1308 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:34: clockAD();
      0002CE 12 02 A1         [24] 1309 	lcall	_clockAD
                           000206  1310 	C$convAD08.h$32$1$20 ==.
                                   1311 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:32: for(i=8;i>0;i--){
      0002D1 DE F1            [24] 1312 	djnz	r6,00103$
                           000208  1313 	C$convAD08.h$36$1$20 ==.
                                   1314 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:36: for(i=8;i>0;i--){		//descarta bits finais
      0002D3 7E 08            [12] 1315 	mov	r6,#0x08
      0002D5                       1316 00105$:
                           00020A  1317 	C$convAD08.h$37$2$22 ==.
                                   1318 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:37: clockAD();
      0002D5 12 02 A1         [24] 1319 	lcall	_clockAD
                           00020D  1320 	C$convAD08.h$36$1$20 ==.
                                   1321 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:36: for(i=8;i>0;i--){		//descarta bits finais
      0002D8 DE FB            [24] 1322 	djnz	r6,00105$
                           00020F  1323 	C$convAD08.h$39$1$20 ==.
                                   1324 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:39: adcCS=1; adcDt=1; adcCk=1;
      0002DA D2 93            [12] 1325 	setb	_adcCS
      0002DC D2 B5            [12] 1326 	setb	_adcDt
      0002DE D2 B4            [12] 1327 	setb	_adcCk
                           000215  1328 	C$convAD08.h$40$1$20 ==.
                                   1329 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/convAD08.h:40: return (sample);
      0002E0 8F 82            [24] 1330 	mov	dpl,r7
                           000217  1331 	C$convAD08.h$41$1$20 ==.
                           000217  1332 	XG$convAD08$0$0 ==.
      0002E2 22               [24] 1333 	ret
                                   1334 ;------------------------------------------------------------
                                   1335 ;Allocation info for local variables in function 'serial'
                                   1336 ;------------------------------------------------------------
                           000218  1337 	G$serial$0$0 ==.
                           000218  1338 	C$serialInt_1.2.h$8$1$20 ==.
                                   1339 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:8: void serial (void) __interrupt(4){
                                   1340 ;	-----------------------------------------
                                   1341 ;	 function serial
                                   1342 ;	-----------------------------------------
      0002E3                       1343 _serial:
                           000218  1344 	C$serialInt_1.2.h$9$1$24 ==.
                                   1345 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:9: if(RI){
                           000218  1346 	C$serialInt_1.2.h$10$2$25 ==.
                                   1347 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:10: RI=0;			//zera flag rx
      0002E3 10 98 02         [24] 1348 	jbc	_RI,00109$
      0002E6 80 07            [24] 1349 	sjmp	00102$
      0002E8                       1350 00109$:
                           00021D  1351 	C$serialInt_1.2.h$11$2$25 ==.
                                   1352 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:11: RxByte=SBUF;            //recebe do buffer
      0002E8 85 99 2B         [24] 1353 	mov	_RxByte,_SBUF
                           000220  1354 	C$serialInt_1.2.h$12$2$25 ==.
                                   1355 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:12: RxFlag=1;               //sinaliza recebido
      0002EB D2 04            [12] 1356 	setb	_RxFlag
      0002ED 80 04            [24] 1357 	sjmp	00104$
      0002EF                       1358 00102$:
                           000224  1359 	C$serialInt_1.2.h$15$2$26 ==.
                                   1360 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:15: TI=0;
      0002EF C2 99            [12] 1361 	clr	_TI
                           000226  1362 	C$serialInt_1.2.h$16$2$26 ==.
                                   1363 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:16: TxFlag=1;
      0002F1 D2 05            [12] 1364 	setb	_TxFlag
      0002F3                       1365 00104$:
                           000228  1366 	C$serialInt_1.2.h$18$1$24 ==.
                           000228  1367 	XG$serial$0$0 ==.
      0002F3 32               [24] 1368 	reti
                                   1369 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1370 ;	eliminated unneeded push/pop psw
                                   1371 ;	eliminated unneeded push/pop dpl
                                   1372 ;	eliminated unneeded push/pop dph
                                   1373 ;	eliminated unneeded push/pop b
                                   1374 ;	eliminated unneeded push/pop acc
                                   1375 ;------------------------------------------------------------
                                   1376 ;Allocation info for local variables in function 'algs2ser'
                                   1377 ;------------------------------------------------------------
                                   1378 ;asc0                      Allocated with name '_algs2ser_PARM_2'
                                   1379 ;dot                       Allocated with name '_algs2ser_PARM_3'
                                   1380 ;spc                       Allocated to registers r7 
                                   1381 ;i                         Allocated to registers r6 
                                   1382 ;------------------------------------------------------------
                           000229  1383 	G$algs2ser$0$0 ==.
                           000229  1384 	C$serialInt_1.2.h$22$1$24 ==.
                                   1385 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:22: void algs2ser(char spc, int asc0, char dot){
                                   1386 ;	-----------------------------------------
                                   1387 ;	 function algs2ser
                                   1388 ;	-----------------------------------------
      0002F4                       1389 _algs2ser:
      0002F4 AF 82            [24] 1390 	mov	r7,dpl
                           00022B  1391 	C$serialInt_1.2.h$23$1$24 ==.
                                   1392 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:23: char i=0;
      0002F6 7E 00            [12] 1393 	mov	r6,#0x00
                           00022D  1394 	C$serialInt_1.2.h$24$1$28 ==.
                                   1395 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:24: while(i<spc){
      0002F8                       1396 00104$:
      0002F8 C3               [12] 1397 	clr	c
      0002F9 EE               [12] 1398 	mov	a,r6
      0002FA 9F               [12] 1399 	subb	a,r7
      0002FB 50 0B            [24] 1400 	jnc	00106$
                           000232  1401 	C$serialInt_1.2.h$25$2$29 ==.
                                   1402 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:25: while(!TxFlag); TxFlag=0;   //aguarda serial
      0002FD                       1403 00101$:
      0002FD 10 05 02         [24] 1404 	jbc	_TxFlag,00149$
      000300 80 FB            [24] 1405 	sjmp	00101$
      000302                       1406 00149$:
                           000237  1407 	C$serialInt_1.2.h$26$2$29 ==.
                                   1408 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:26: SBUF=32; i++;               //envia espa�os
      000302 75 99 20         [24] 1409 	mov	_SBUF,#0x20
      000305 0E               [12] 1410 	inc	r6
      000306 80 F0            [24] 1411 	sjmp	00104$
      000308                       1412 00106$:
                           00023D  1413 	C$serialInt_1.2.h$28$1$28 ==.
                                   1414 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:28: for(i=asc0;i<5;i++){
      000308 AE 58            [24] 1415 	mov	r6,_algs2ser_PARM_2
      00030A                       1416 00117$:
      00030A BE 05 00         [24] 1417 	cjne	r6,#0x05,00150$
      00030D                       1418 00150$:
      00030D 50 1A            [24] 1419 	jnc	00119$
                           000244  1420 	C$serialInt_1.2.h$29$2$30 ==.
                                   1421 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:29: if(i==dot){
      00030F EE               [12] 1422 	mov	a,r6
      000310 B5 5A 08         [24] 1423 	cjne	a,_algs2ser_PARM_3,00112$
                           000248  1424 	C$serialInt_1.2.h$30$3$31 ==.
                                   1425 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:30: while(!TxFlag);TxFlag=0;//aguarda serial
      000313                       1426 00107$:
      000313 10 05 02         [24] 1427 	jbc	_TxFlag,00154$
      000316 80 FB            [24] 1428 	sjmp	00107$
      000318                       1429 00154$:
                           00024D  1430 	C$serialInt_1.2.h$31$3$31 ==.
                                   1431 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:31: SBUF=46;                //envia '.'
      000318 75 99 2E         [24] 1432 	mov	_SBUF,#0x2e
                           000250  1433 	C$serialInt_1.2.h$33$2$30 ==.
                                   1434 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:33: while(!TxFlag); TxFlag=0;   //aguarda serial
      00031B                       1435 00112$:
      00031B 10 05 02         [24] 1436 	jbc	_TxFlag,00155$
      00031E 80 FB            [24] 1437 	sjmp	00112$
      000320                       1438 00155$:
                           000255  1439 	C$serialInt_1.2.h$34$2$30 ==.
                                   1440 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:34: SBUF=(algs[i]);             //envia n�mero
      000320 EE               [12] 1441 	mov	a,r6
      000321 24 51            [12] 1442 	add	a,#_algs
      000323 F9               [12] 1443 	mov	r1,a
      000324 87 99            [24] 1444 	mov	_SBUF,@r1
                           00025B  1445 	C$serialInt_1.2.h$28$1$28 ==.
                                   1446 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:28: for(i=asc0;i<5;i++){
      000326 0E               [12] 1447 	inc	r6
      000327 80 E1            [24] 1448 	sjmp	00117$
      000329                       1449 00119$:
                           00025E  1450 	C$serialInt_1.2.h$36$1$28 ==.
                           00025E  1451 	XG$algs2ser$0$0 ==.
      000329 22               [24] 1452 	ret
                                   1453 ;------------------------------------------------------------
                                   1454 ;Allocation info for local variables in function 'int2ascii'
                                   1455 ;------------------------------------------------------------
                                   1456 ;val                       Allocated to registers r6 r7 
                                   1457 ;------------------------------------------------------------
                           00025F  1458 	G$int2ascii$0$0 ==.
                           00025F  1459 	C$serialInt_1.2.h$40$1$28 ==.
                                   1460 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:40: void int2ascii(unsigned int val){
                                   1461 ;	-----------------------------------------
                                   1462 ;	 function int2ascii
                                   1463 ;	-----------------------------------------
      00032A                       1464 _int2ascii:
      00032A AE 82            [24] 1465 	mov	r6,dpl
      00032C AF 83            [24] 1466 	mov	r7,dph
                           000263  1467 	C$serialInt_1.2.h$41$1$33 ==.
                                   1468 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:41: algs[0]=32; algs[1]=32;
      00032E 75 51 20         [24] 1469 	mov	_algs,#0x20
      000331 75 52 20         [24] 1470 	mov	(_algs + 0x0001),#0x20
                           000269  1471 	C$serialInt_1.2.h$42$1$33 ==.
                                   1472 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:42: if(val>999){
      000334 C3               [12] 1473 	clr	c
      000335 74 E7            [12] 1474 	mov	a,#0xe7
      000337 9E               [12] 1475 	subb	a,r6
      000338 74 03            [12] 1476 	mov	a,#0x03
      00033A 9F               [12] 1477 	subb	a,r7
      00033B 50 56            [24] 1478 	jnc	00102$
                           000272  1479 	C$serialInt_1.2.h$43$1$33 ==.
                                   1480 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:43: algs[0]=0x30+(val/10000);
      00033D 75 08 10         [24] 1481 	mov	__divuint_PARM_2,#0x10
      000340 75 09 27         [24] 1482 	mov	(__divuint_PARM_2 + 1),#0x27
      000343 8E 82            [24] 1483 	mov	dpl,r6
      000345 8F 83            [24] 1484 	mov	dph,r7
      000347 C0 07            [24] 1485 	push	ar7
      000349 C0 06            [24] 1486 	push	ar6
      00034B 12 06 C9         [24] 1487 	lcall	__divuint
      00034E AC 82            [24] 1488 	mov	r4,dpl
      000350 D0 06            [24] 1489 	pop	ar6
      000352 D0 07            [24] 1490 	pop	ar7
      000354 74 30            [12] 1491 	mov	a,#0x30
      000356 2C               [12] 1492 	add	a,r4
      000357 F5 51            [12] 1493 	mov	_algs,a
                           00028E  1494 	C$serialInt_1.2.h$44$1$33 ==.
                                   1495 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:44: val=val%10000;
      000359 75 08 10         [24] 1496 	mov	__moduint_PARM_2,#0x10
      00035C 75 09 27         [24] 1497 	mov	(__moduint_PARM_2 + 1),#0x27
      00035F 8E 82            [24] 1498 	mov	dpl,r6
      000361 8F 83            [24] 1499 	mov	dph,r7
      000363 12 07 0F         [24] 1500 	lcall	__moduint
                           00029B  1501 	C$serialInt_1.2.h$45$1$33 ==.
                                   1502 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:45: algs[1]=0x30+(val/1000);
      000366 AE 82            [24] 1503 	mov	r6,dpl
      000368 AF 83            [24] 1504 	mov	r7,dph
      00036A 75 08 E8         [24] 1505 	mov	__divuint_PARM_2,#0xe8
      00036D 75 09 03         [24] 1506 	mov	(__divuint_PARM_2 + 1),#0x03
      000370 C0 07            [24] 1507 	push	ar7
      000372 C0 06            [24] 1508 	push	ar6
      000374 12 06 C9         [24] 1509 	lcall	__divuint
      000377 AC 82            [24] 1510 	mov	r4,dpl
      000379 D0 06            [24] 1511 	pop	ar6
      00037B D0 07            [24] 1512 	pop	ar7
      00037D 74 30            [12] 1513 	mov	a,#0x30
      00037F 2C               [12] 1514 	add	a,r4
      000380 F5 52            [12] 1515 	mov	(_algs + 0x0001),a
                           0002B7  1516 	C$serialInt_1.2.h$46$1$33 ==.
                                   1517 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:46: val=val%1000;
      000382 75 08 E8         [24] 1518 	mov	__moduint_PARM_2,#0xe8
      000385 75 09 03         [24] 1519 	mov	(__moduint_PARM_2 + 1),#0x03
      000388 8E 82            [24] 1520 	mov	dpl,r6
      00038A 8F 83            [24] 1521 	mov	dph,r7
      00038C 12 07 0F         [24] 1522 	lcall	__moduint
      00038F AE 82            [24] 1523 	mov	r6,dpl
      000391 AF 83            [24] 1524 	mov	r7,dph
      000393                       1525 00102$:
                           0002C8  1526 	C$serialInt_1.2.h$48$1$33 ==.
                                   1527 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:48: algs[2]=0x30+(val/100);
      000393 75 08 64         [24] 1528 	mov	__divuint_PARM_2,#0x64
      000396 75 09 00         [24] 1529 	mov	(__divuint_PARM_2 + 1),#0x00
      000399 8E 82            [24] 1530 	mov	dpl,r6
      00039B 8F 83            [24] 1531 	mov	dph,r7
      00039D C0 07            [24] 1532 	push	ar7
      00039F C0 06            [24] 1533 	push	ar6
      0003A1 12 06 C9         [24] 1534 	lcall	__divuint
      0003A4 AC 82            [24] 1535 	mov	r4,dpl
      0003A6 D0 06            [24] 1536 	pop	ar6
      0003A8 D0 07            [24] 1537 	pop	ar7
      0003AA 74 30            [12] 1538 	mov	a,#0x30
      0003AC 2C               [12] 1539 	add	a,r4
      0003AD F5 53            [12] 1540 	mov	(_algs + 0x0002),a
                           0002E4  1541 	C$serialInt_1.2.h$49$1$33 ==.
                                   1542 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:49: val=val%100;
      0003AF 75 08 64         [24] 1543 	mov	__moduint_PARM_2,#0x64
      0003B2 75 09 00         [24] 1544 	mov	(__moduint_PARM_2 + 1),#0x00
      0003B5 8E 82            [24] 1545 	mov	dpl,r6
      0003B7 8F 83            [24] 1546 	mov	dph,r7
      0003B9 12 07 0F         [24] 1547 	lcall	__moduint
                           0002F1  1548 	C$serialInt_1.2.h$50$1$33 ==.
                                   1549 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:50: algs[3]=0x30+(val/10);
      0003BC AE 82            [24] 1550 	mov	r6,dpl
      0003BE AF 83            [24] 1551 	mov	r7,dph
      0003C0 75 08 0A         [24] 1552 	mov	__divuint_PARM_2,#0x0a
      0003C3 75 09 00         [24] 1553 	mov	(__divuint_PARM_2 + 1),#0x00
      0003C6 C0 07            [24] 1554 	push	ar7
      0003C8 C0 06            [24] 1555 	push	ar6
      0003CA 12 06 C9         [24] 1556 	lcall	__divuint
      0003CD AC 82            [24] 1557 	mov	r4,dpl
      0003CF D0 06            [24] 1558 	pop	ar6
      0003D1 D0 07            [24] 1559 	pop	ar7
      0003D3 74 30            [12] 1560 	mov	a,#0x30
      0003D5 2C               [12] 1561 	add	a,r4
      0003D6 F5 54            [12] 1562 	mov	(_algs + 0x0003),a
                           00030D  1563 	C$serialInt_1.2.h$51$1$33 ==.
                                   1564 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:51: algs[4]=0x30+(val%10);
      0003D8 75 08 0A         [24] 1565 	mov	__moduint_PARM_2,#0x0a
      0003DB 75 09 00         [24] 1566 	mov	(__moduint_PARM_2 + 1),#0x00
      0003DE 8E 82            [24] 1567 	mov	dpl,r6
      0003E0 8F 83            [24] 1568 	mov	dph,r7
      0003E2 12 07 0F         [24] 1569 	lcall	__moduint
      0003E5 AE 82            [24] 1570 	mov	r6,dpl
      0003E7 74 30            [12] 1571 	mov	a,#0x30
      0003E9 2E               [12] 1572 	add	a,r6
      0003EA F5 55            [12] 1573 	mov	(_algs + 0x0004),a
                           000321  1574 	C$serialInt_1.2.h$52$1$33 ==.
                           000321  1575 	XG$int2ascii$0$0 ==.
      0003EC 22               [24] 1576 	ret
                                   1577 ;------------------------------------------------------------
                                   1578 ;Allocation info for local variables in function 'char2Ser'
                                   1579 ;------------------------------------------------------------
                                   1580 ;val                       Allocated with name '_char2Ser_PARM_2'
                                   1581 ;dot                       Allocated with name '_char2Ser_PARM_3'
                                   1582 ;spc                       Allocated to registers r7 
                                   1583 ;------------------------------------------------------------
                           000322  1584 	G$char2Ser$0$0 ==.
                           000322  1585 	C$serialInt_1.2.h$57$1$33 ==.
                                   1586 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:57: void char2Ser(char spc, unsigned char val, char dot){
                                   1587 ;	-----------------------------------------
                                   1588 ;	 function char2Ser
                                   1589 ;	-----------------------------------------
      0003ED                       1590 _char2Ser:
      0003ED AF 82            [24] 1591 	mov	r7,dpl
                           000324  1592 	C$serialInt_1.2.h$58$1$36 ==.
                                   1593 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:58: int2ascii(val);
      0003EF AD 5B            [24] 1594 	mov	r5,_char2Ser_PARM_2
      0003F1 7E 00            [12] 1595 	mov	r6,#0x00
      0003F3 8D 82            [24] 1596 	mov	dpl,r5
      0003F5 8E 83            [24] 1597 	mov	dph,r6
      0003F7 C0 07            [24] 1598 	push	ar7
      0003F9 12 03 2A         [24] 1599 	lcall	_int2ascii
      0003FC D0 07            [24] 1600 	pop	ar7
                           000333  1601 	C$serialInt_1.2.h$59$1$36 ==.
                                   1602 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:59: dot=dot+2;
      0003FE 05 5C            [12] 1603 	inc	_char2Ser_PARM_3
      000400 05 5C            [12] 1604 	inc	_char2Ser_PARM_3
                           000337  1605 	C$serialInt_1.2.h$60$1$36 ==.
                                   1606 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:60: algs2ser(spc, 2, dot);
      000402 75 58 02         [24] 1607 	mov	_algs2ser_PARM_2,#0x02
      000405 75 59 00         [24] 1608 	mov	(_algs2ser_PARM_2 + 1),#0x00
      000408 85 5C 5A         [24] 1609 	mov	_algs2ser_PARM_3,_char2Ser_PARM_3
      00040B 8F 82            [24] 1610 	mov	dpl,r7
      00040D 12 02 F4         [24] 1611 	lcall	_algs2ser
                           000345  1612 	C$serialInt_1.2.h$61$1$36 ==.
                           000345  1613 	XG$char2Ser$0$0 ==.
      000410 22               [24] 1614 	ret
                                   1615 ;------------------------------------------------------------
                                   1616 ;Allocation info for local variables in function 'int2Ser'
                                   1617 ;------------------------------------------------------------
                                   1618 ;val                       Allocated with name '_int2Ser_PARM_2'
                                   1619 ;dot                       Allocated with name '_int2Ser_PARM_3'
                                   1620 ;spc                       Allocated to registers r7 
                                   1621 ;------------------------------------------------------------
                           000346  1622 	G$int2Ser$0$0 ==.
                           000346  1623 	C$serialInt_1.2.h$65$1$36 ==.
                                   1624 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:65: void int2Ser(char spc, unsigned int val, char dot){
                                   1625 ;	-----------------------------------------
                                   1626 ;	 function int2Ser
                                   1627 ;	-----------------------------------------
      000411                       1628 _int2Ser:
      000411 AF 82            [24] 1629 	mov	r7,dpl
                           000348  1630 	C$serialInt_1.2.h$66$1$38 ==.
                                   1631 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:66: int2ascii(val);
      000413 85 5D 82         [24] 1632 	mov	dpl,_int2Ser_PARM_2
      000416 85 5E 83         [24] 1633 	mov	dph,(_int2Ser_PARM_2 + 1)
      000419 C0 07            [24] 1634 	push	ar7
      00041B 12 03 2A         [24] 1635 	lcall	_int2ascii
      00041E D0 07            [24] 1636 	pop	ar7
                           000355  1637 	C$serialInt_1.2.h$67$1$38 ==.
                                   1638 ;	C:/Program Files (x86)/SDCC/bin/../include/serialInt_1.2.h:67: algs2ser(spc, 0, dot);
      000420 E4               [12] 1639 	clr	a
      000421 F5 58            [12] 1640 	mov	_algs2ser_PARM_2,a
      000423 F5 59            [12] 1641 	mov	(_algs2ser_PARM_2 + 1),a
      000425 85 5F 5A         [24] 1642 	mov	_algs2ser_PARM_3,_int2Ser_PARM_3
      000428 8F 82            [24] 1643 	mov	dpl,r7
      00042A 12 02 F4         [24] 1644 	lcall	_algs2ser
                           000362  1645 	C$serialInt_1.2.h$68$1$38 ==.
                           000362  1646 	XG$int2Ser$0$0 ==.
      00042D 22               [24] 1647 	ret
                                   1648 ;------------------------------------------------------------
                                   1649 ;Allocation info for local variables in function 'RTproc_1'
                                   1650 ;------------------------------------------------------------
                           000363  1651 	G$RTproc_1$0$0 ==.
                           000363  1652 	C$3203_CtrlPID3.c$13$1$38 ==.
                                   1653 ;	3203_CtrlPID3.c:13: void RTproc_1(){                
                                   1654 ;	-----------------------------------------
                                   1655 ;	 function RTproc_1
                                   1656 ;	-----------------------------------------
      00042E                       1657 _RTproc_1:
                           000363  1658 	C$3203_CtrlPID3.c$14$1$39 ==.
                                   1659 ;	3203_CtrlPID3.c:14: if(cnt200==pwm) P3_3=1;     
      00042E E5 63            [12] 1660 	mov	a,_pwm
      000430 B5 28 02         [24] 1661 	cjne	a,_cnt200,00103$
      000433 D2 B3            [12] 1662 	setb	_P3_3
      000435                       1663 00103$:
                           00036A  1664 	C$3203_CtrlPID3.c$15$1$39 ==.
                           00036A  1665 	XG$RTproc_1$0$0 ==.
      000435 22               [24] 1666 	ret
                                   1667 ;------------------------------------------------------------
                                   1668 ;Allocation info for local variables in function 'RTproc_2'
                                   1669 ;------------------------------------------------------------
                           00036B  1670 	G$RTproc_2$0$0 ==.
                           00036B  1671 	C$3203_CtrlPID3.c$16$1$39 ==.
                                   1672 ;	3203_CtrlPID3.c:16: void RTproc_2(){                
                                   1673 ;	-----------------------------------------
                                   1674 ;	 function RTproc_2
                                   1675 ;	-----------------------------------------
      000436                       1676 _RTproc_2:
                           00036B  1677 	C$3203_CtrlPID3.c$17$1$40 ==.
                                   1678 ;	3203_CtrlPID3.c:17: P3_3=0;                     
      000436 C2 B3            [12] 1679 	clr	_P3_3
                           00036D  1680 	C$3203_CtrlPID3.c$18$1$40 ==.
                           00036D  1681 	XG$RTproc_2$0$0 ==.
      000438 22               [24] 1682 	ret
                                   1683 ;------------------------------------------------------------
                                   1684 ;Allocation info for local variables in function 'ajustPID'
                                   1685 ;------------------------------------------------------------
                                   1686 ;Kx                        Allocated to registers r7 
                                   1687 ;------------------------------------------------------------
                           00036E  1688 	G$ajustPID$0$0 ==.
                           00036E  1689 	C$3203_CtrlPID3.c$20$1$40 ==.
                                   1690 ;	3203_CtrlPID3.c:20: void ajustPID(){                
                                   1691 ;	-----------------------------------------
                                   1692 ;	 function ajustPID
                                   1693 ;	-----------------------------------------
      000439                       1694 _ajustPID:
                           00036E  1695 	C$3203_CtrlPID3.c$21$1$40 ==.
                                   1696 ;	3203_CtrlPID3.c:21: unsigned char Kx=0;
      000439 7F 00            [12] 1697 	mov	r7,#0x00
                           000370  1698 	C$3203_CtrlPID3.c$22$1$40 ==.
                                   1699 ;	3203_CtrlPID3.c:22: __bit ajust=1;              
      00043B D2 0E            [12] 1700 	setb	_ajustPID_ajust_1_41
                           000372  1701 	C$3203_CtrlPID3.c$23$1$41 ==.
                                   1702 ;	3203_CtrlPID3.c:23: pwm=0;                      
      00043D 75 63 00         [24] 1703 	mov	_pwm,#0x00
                           000375  1704 	C$3203_CtrlPID3.c$24$3$43 ==.
                                   1705 ;	3203_CtrlPID3.c:24: while(ajust){
      000440                       1706 00123$:
      000440 20 0E 03         [24] 1707 	jb	_ajustPID_ajust_1_41,00170$
      000443 02 04 D5         [24] 1708 	ljmp	00126$
      000446                       1709 00170$:
                           00037B  1710 	C$3203_CtrlPID3.c$25$2$42 ==.
                                   1711 ;	3203_CtrlPID3.c:25: if(S1==3){              
      000446 74 03            [12] 1712 	mov	a,#0x03
      000448 B5 22 0B         [24] 1713 	cjne	a,_S1,00102$
                           000380  1714 	C$3203_CtrlPID3.c$26$3$43 ==.
                                   1715 ;	3203_CtrlPID3.c:26: S1=0;
      00044B 75 22 00         [24] 1716 	mov	_S1,#0x00
                           000383  1717 	C$3203_CtrlPID3.c$27$3$43 ==.
                                   1718 ;	3203_CtrlPID3.c:27: pid[Kx]++;          
      00044E EF               [12] 1719 	mov	a,r7
      00044F 24 60            [12] 1720 	add	a,#_pid
      000451 F9               [12] 1721 	mov	r1,a
      000452 E7               [12] 1722 	mov	a,@r1
      000453 FE               [12] 1723 	mov	r6,a
      000454 04               [12] 1724 	inc	a
      000455 F7               [12] 1725 	mov	@r1,a
      000456                       1726 00102$:
                           00038B  1727 	C$3203_CtrlPID3.c$29$2$42 ==.
                                   1728 ;	3203_CtrlPID3.c:29: if(S2==3){                  
      000456 74 03            [12] 1729 	mov	a,#0x03
      000458 B5 23 0B         [24] 1730 	cjne	a,_S2,00104$
                           000390  1731 	C$3203_CtrlPID3.c$30$3$44 ==.
                                   1732 ;	3203_CtrlPID3.c:30: S2=0;
      00045B 75 23 00         [24] 1733 	mov	_S2,#0x00
                           000393  1734 	C$3203_CtrlPID3.c$31$3$44 ==.
                                   1735 ;	3203_CtrlPID3.c:31: pid[Kx]--;              
      00045E EF               [12] 1736 	mov	a,r7
      00045F 24 60            [12] 1737 	add	a,#_pid
      000461 F9               [12] 1738 	mov	r1,a
      000462 E7               [12] 1739 	mov	a,@r1
      000463 FE               [12] 1740 	mov	r6,a
      000464 14               [12] 1741 	dec	a
      000465 F7               [12] 1742 	mov	@r1,a
      000466                       1743 00104$:
                           00039B  1744 	C$3203_CtrlPID3.c$33$2$42 ==.
                                   1745 ;	3203_CtrlPID3.c:33: if(Kx==0) char2LCD(0x81, pid[0], 2);  
      000466 EF               [12] 1746 	mov	a,r7
      000467 70 10            [24] 1747 	jnz	00106$
      000469 85 60 56         [24] 1748 	mov	_char2LCD_PARM_2,_pid
      00046C 75 57 02         [24] 1749 	mov	_char2LCD_PARM_3,#0x02
      00046F 75 82 81         [24] 1750 	mov	dpl,#0x81
      000472 C0 07            [24] 1751 	push	ar7
      000474 12 01 C1         [24] 1752 	lcall	_char2LCD
      000477 D0 07            [24] 1753 	pop	ar7
      000479                       1754 00106$:
                           0003AE  1755 	C$3203_CtrlPID3.c$34$2$42 ==.
                                   1756 ;	3203_CtrlPID3.c:34: if(Kx==1) char2LCD(0x86, pid[1], 2);  
      000479 BF 01 10         [24] 1757 	cjne	r7,#0x01,00108$
      00047C 85 61 56         [24] 1758 	mov	_char2LCD_PARM_2,(_pid + 0x0001)
      00047F 75 57 02         [24] 1759 	mov	_char2LCD_PARM_3,#0x02
      000482 75 82 86         [24] 1760 	mov	dpl,#0x86
      000485 C0 07            [24] 1761 	push	ar7
      000487 12 01 C1         [24] 1762 	lcall	_char2LCD
      00048A D0 07            [24] 1763 	pop	ar7
      00048C                       1764 00108$:
                           0003C1  1765 	C$3203_CtrlPID3.c$35$2$42 ==.
                                   1766 ;	3203_CtrlPID3.c:35: if(Kx==2) char2LCD(0x8B, pid[2], 2); 
      00048C BF 02 10         [24] 1767 	cjne	r7,#0x02,00110$
      00048F 85 62 56         [24] 1768 	mov	_char2LCD_PARM_2,(_pid + 0x0002)
      000492 75 57 02         [24] 1769 	mov	_char2LCD_PARM_3,#0x02
      000495 75 82 8B         [24] 1770 	mov	dpl,#0x8b
      000498 C0 07            [24] 1771 	push	ar7
      00049A 12 01 C1         [24] 1772 	lcall	_char2LCD
      00049D D0 07            [24] 1773 	pop	ar7
      00049F                       1774 00110$:
                           0003D4  1775 	C$3203_CtrlPID3.c$36$2$42 ==.
                                   1776 ;	3203_CtrlPID3.c:36: umSeg=0; cnt100=255;    
      00049F C2 00            [12] 1777 	clr	_umSeg
      0004A1 75 27 FF         [24] 1778 	mov	_cnt100,#0xff
                           0003D9  1779 	C$3203_CtrlPID3.c$37$2$42 ==.
                                   1780 ;	3203_CtrlPID3.c:37: while(S1==2);
      0004A4                       1781 00111$:
      0004A4 74 02            [12] 1782 	mov	a,#0x02
      0004A6 B5 22 02         [24] 1783 	cjne	a,_S1,00180$
      0004A9 80 F9            [24] 1784 	sjmp	00111$
      0004AB                       1785 00180$:
                           0003E0  1786 	C$3203_CtrlPID3.c$38$2$42 ==.
                                   1787 ;	3203_CtrlPID3.c:38: if(umSeg){S1=0;         
      0004AB 30 00 0B         [24] 1788 	jnb	_umSeg,00117$
      0004AE 75 22 00         [24] 1789 	mov	_S1,#0x00
                           0003E6  1790 	C$3203_CtrlPID3.c$39$3$45 ==.
                                   1791 ;	3203_CtrlPID3.c:39: umSeg=0; Kx++;      
      0004B1 C2 00            [12] 1792 	clr	_umSeg
      0004B3 0F               [12] 1793 	inc	r7
                           0003E9  1794 	C$3203_CtrlPID3.c$40$3$45 ==.
                                   1795 ;	3203_CtrlPID3.c:40: if(Kx==3) Kx=0;     
      0004B4 BF 03 02         [24] 1796 	cjne	r7,#0x03,00117$
      0004B7 7F 00            [12] 1797 	mov	r7,#0x00
      0004B9                       1798 00117$:
                           0003EE  1799 	C$3203_CtrlPID3.c$42$2$42 ==.
                                   1800 ;	3203_CtrlPID3.c:42: umSeg=0; cnt100=255;    
      0004B9 C2 00            [12] 1801 	clr	_umSeg
      0004BB 75 27 FF         [24] 1802 	mov	_cnt100,#0xff
                           0003F3  1803 	C$3203_CtrlPID3.c$43$2$42 ==.
                                   1804 ;	3203_CtrlPID3.c:43: while(S2==2);
      0004BE                       1805 00118$:
      0004BE 74 02            [12] 1806 	mov	a,#0x02
      0004C0 B5 23 02         [24] 1807 	cjne	a,_S2,00184$
      0004C3 80 F9            [24] 1808 	sjmp	00118$
      0004C5                       1809 00184$:
                           0003FA  1810 	C$3203_CtrlPID3.c$44$2$42 ==.
                                   1811 ;	3203_CtrlPID3.c:44: if(umSeg){S2=0;         
      0004C5 20 00 03         [24] 1812 	jb	_umSeg,00185$
      0004C8 02 04 40         [24] 1813 	ljmp	00123$
      0004CB                       1814 00185$:
      0004CB 75 23 00         [24] 1815 	mov	_S2,#0x00
                           000403  1816 	C$3203_CtrlPID3.c$45$3$46 ==.
                                   1817 ;	3203_CtrlPID3.c:45: umSeg=0; ajust=0;   
      0004CE C2 00            [12] 1818 	clr	_umSeg
      0004D0 C2 0E            [12] 1819 	clr	_ajustPID_ajust_1_41
      0004D2 02 04 40         [24] 1820 	ljmp	00123$
      0004D5                       1821 00126$:
                           00040A  1822 	C$3203_CtrlPID3.c$47$1$41 ==.
                           00040A  1823 	XG$ajustPID$0$0 ==.
      0004D5 22               [24] 1824 	ret
                                   1825 ;------------------------------------------------------------
                                   1826 ;Allocation info for local variables in function 'main'
                                   1827 ;------------------------------------------------------------
                                   1828 ;setup                     Allocated with name '_main_setup_1_47'
                                   1829 ;tempC                     Allocated with name '_main_tempC_1_47'
                                   1830 ;errAt                     Allocated with name '_main_errAt_1_47'
                                   1831 ;erAnt                     Allocated with name '_main_erAnt_1_47'
                                   1832 ;ctrlAt                    Allocated with name '_main_ctrlAt_1_47'
                                   1833 ;ctlAnt                    Allocated to registers 
                                   1834 ;P                         Allocated with name '_main_P_1_47'
                                   1835 ;I                         Allocated with name '_main_I_1_47'
                                   1836 ;D                         Allocated to registers r3 r4 
                                   1837 ;tempo                     Allocated with name '_main_tempo_1_47'
                                   1838 ;i                         Allocated to registers r6 
                                   1839 ;------------------------------------------------------------
                           00040B  1840 	G$main$0$0 ==.
                           00040B  1841 	C$3203_CtrlPID3.c$49$1$41 ==.
                                   1842 ;	3203_CtrlPID3.c:49: void main (){
                                   1843 ;	-----------------------------------------
                                   1844 ;	 function main
                                   1845 ;	-----------------------------------------
      0004D6                       1846 _main:
                           00040B  1847 	C$3203_CtrlPID3.c$50$1$41 ==.
                                   1848 ;	3203_CtrlPID3.c:50: unsigned char setup=70;        
      0004D6 75 64 46         [24] 1849 	mov	_main_setup_1_47,#0x46
                           00040E  1850 	C$3203_CtrlPID3.c$51$1$41 ==.
                                   1851 ;	3203_CtrlPID3.c:51: unsigned char tempC=0;         
                           00040E  1852 	C$3203_CtrlPID3.c$52$1$41 ==.
                                   1853 ;	3203_CtrlPID3.c:52: signed char errAt=0;           
                           00040E  1854 	C$3203_CtrlPID3.c$54$1$41 ==.
                                   1855 ;	3203_CtrlPID3.c:54: signed int ctrlAt=0;           
      0004D9 E4               [12] 1856 	clr	a
      0004DA F5 65            [12] 1857 	mov	_main_tempC_1_47,a
      0004DC F5 66            [12] 1858 	mov	_main_errAt_1_47,a
      0004DE F5 68            [12] 1859 	mov	_main_ctrlAt_1_47,a
      0004E0 F5 69            [12] 1860 	mov	(_main_ctrlAt_1_47 + 1),a
                           000417  1861 	C$3203_CtrlPID3.c$57$1$41 ==.
                                   1862 ;	3203_CtrlPID3.c:57: unsigned int tempo=0;          
      0004E2 F5 6E            [12] 1863 	mov	_main_tempo_1_47,a
      0004E4 F5 6F            [12] 1864 	mov	(_main_tempo_1_47 + 1),a
                           00041B  1865 	C$3203_CtrlPID3.c$60$1$47 ==.
                                   1866 ;	3203_CtrlPID3.c:60: inic();
      0004E6 12 02 7F         [24] 1867 	lcall	_inic
                           00041E  1868 	C$3203_CtrlPID3.c$62$1$47 ==.
                                   1869 ;	3203_CtrlPID3.c:62: P3_3=0;                       
      0004E9 C2 B3            [12] 1870 	clr	_P3_3
                           000420  1871 	C$3203_CtrlPID3.c$63$1$47 ==.
                                   1872 ;	3203_CtrlPID3.c:63: Ch01=0;                       
      0004EB C2 09            [12] 1873 	clr	_Ch01
                           000422  1874 	C$3203_CtrlPID3.c$64$1$47 ==.
                                   1875 ;	3203_CtrlPID3.c:64: wrLCD4(comand,0x80);
      0004ED C2 0D            [12] 1876 	clr	_wrLCD4_PARM_1
      0004EF 75 82 80         [24] 1877 	mov	dpl,#0x80
      0004F2 12 01 9B         [24] 1878 	lcall	_wrLCD4
                           00042A  1879 	C$3203_CtrlPID3.c$65$1$47 ==.
                                   1880 ;	3203_CtrlPID3.c:65: for(i=0;i<12;i++){
      0004F5 7E 00            [12] 1881 	mov	r6,#0x00
      0004F7                       1882 00123$:
                           00042C  1883 	C$3203_CtrlPID3.c$66$2$48 ==.
                                   1884 ;	3203_CtrlPID3.c:66: wrLCD4(letra, Tit1[i]);   
      0004F7 EE               [12] 1885 	mov	a,r6
      0004F8 90 07 9C         [24] 1886 	mov	dptr,#_Tit1
      0004FB 93               [24] 1887 	movc	a,@a+dptr
      0004FC FA               [12] 1888 	mov	r2,a
      0004FD D2 0D            [12] 1889 	setb	_wrLCD4_PARM_1
      0004FF 8A 82            [24] 1890 	mov	dpl,r2
      000501 C0 06            [24] 1891 	push	ar6
      000503 12 01 9B         [24] 1892 	lcall	_wrLCD4
      000506 D0 06            [24] 1893 	pop	ar6
                           00043D  1894 	C$3203_CtrlPID3.c$65$1$47 ==.
                                   1895 ;	3203_CtrlPID3.c:65: for(i=0;i<12;i++){
      000508 0E               [12] 1896 	inc	r6
      000509 BE 0C 00         [24] 1897 	cjne	r6,#0x0c,00174$
      00050C                       1898 00174$:
      00050C 40 E9            [24] 1899 	jc	00123$
                           000443  1900 	C$3203_CtrlPID3.c$68$1$47 ==.
                                   1901 ;	3203_CtrlPID3.c:68: wrLCD4(comand,0xC0);
      00050E C2 0D            [12] 1902 	clr	_wrLCD4_PARM_1
      000510 75 82 C0         [24] 1903 	mov	dpl,#0xc0
      000513 12 01 9B         [24] 1904 	lcall	_wrLCD4
                           00044B  1905 	C$3203_CtrlPID3.c$69$1$47 ==.
                                   1906 ;	3203_CtrlPID3.c:69: for(i=0;i<12;i++){
      000516 7E 00            [12] 1907 	mov	r6,#0x00
      000518                       1908 00125$:
                           00044D  1909 	C$3203_CtrlPID3.c$70$2$49 ==.
                                   1910 ;	3203_CtrlPID3.c:70: wrLCD4(letra, Tit2[i]);   
      000518 EE               [12] 1911 	mov	a,r6
      000519 90 07 A9         [24] 1912 	mov	dptr,#_Tit2
      00051C 93               [24] 1913 	movc	a,@a+dptr
      00051D FA               [12] 1914 	mov	r2,a
      00051E D2 0D            [12] 1915 	setb	_wrLCD4_PARM_1
      000520 8A 82            [24] 1916 	mov	dpl,r2
      000522 C0 06            [24] 1917 	push	ar6
      000524 12 01 9B         [24] 1918 	lcall	_wrLCD4
      000527 D0 06            [24] 1919 	pop	ar6
                           00045E  1920 	C$3203_CtrlPID3.c$69$1$47 ==.
                                   1921 ;	3203_CtrlPID3.c:69: for(i=0;i<12;i++){
      000529 0E               [12] 1922 	inc	r6
      00052A BE 0C 00         [24] 1923 	cjne	r6,#0x0c,00176$
      00052D                       1924 00176$:
      00052D 40 E9            [24] 1925 	jc	00125$
                           000464  1926 	C$3203_CtrlPID3.c$73$1$47 ==.
                                   1927 ;	3203_CtrlPID3.c:73: ajustPID();                   
      00052F 12 04 39         [24] 1928 	lcall	_ajustPID
                           000467  1929 	C$3203_CtrlPID3.c$74$1$47 ==.
                                   1930 ;	3203_CtrlPID3.c:74: while(1){
      000532                       1931 00121$:
                           000467  1932 	C$3203_CtrlPID3.c$76$2$50 ==.
                                   1933 ;	3203_CtrlPID3.c:76: if(S1==3){
      000532 74 03            [12] 1934 	mov	a,#0x03
      000534 B5 22 05         [24] 1935 	cjne	a,_S1,00104$
                           00046C  1936 	C$3203_CtrlPID3.c$77$3$51 ==.
                                   1937 ;	3203_CtrlPID3.c:77: S1=0; setup++;        
      000537 75 22 00         [24] 1938 	mov	_S1,#0x00
      00053A 05 64            [12] 1939 	inc	_main_setup_1_47
      00053C                       1940 00104$:
                           000471  1941 	C$3203_CtrlPID3.c$79$2$50 ==.
                                   1942 ;	3203_CtrlPID3.c:79: if(S2==3){
      00053C 74 03            [12] 1943 	mov	a,#0x03
      00053E B5 23 05         [24] 1944 	cjne	a,_S2,00106$
                           000476  1945 	C$3203_CtrlPID3.c$80$3$52 ==.
                                   1946 ;	3203_CtrlPID3.c:80: S2=0; setup--;        
      000541 75 23 00         [24] 1947 	mov	_S2,#0x00
      000544 15 64            [12] 1948 	dec	_main_setup_1_47
      000546                       1949 00106$:
                           00047B  1950 	C$3203_CtrlPID3.c$82$2$50 ==.
                                   1951 ;	3203_CtrlPID3.c:82: if((S1==2)&&(S2==2)){     
      000546 74 02            [12] 1952 	mov	a,#0x02
      000548 B5 22 11         [24] 1953 	cjne	a,_S1,00108$
      00054B 74 02            [12] 1954 	mov	a,#0x02
      00054D B5 23 0C         [24] 1955 	cjne	a,_S2,00108$
                           000485  1956 	C$3203_CtrlPID3.c$83$3$53 ==.
                                   1957 ;	3203_CtrlPID3.c:83: S1=0; S2=0; tempo=0;  
      000550 E4               [12] 1958 	clr	a
      000551 F5 22            [12] 1959 	mov	_S1,a
      000553 F5 23            [12] 1960 	mov	_S2,a
      000555 F5 6E            [12] 1961 	mov	_main_tempo_1_47,a
      000557 F5 6F            [12] 1962 	mov	(_main_tempo_1_47 + 1),a
                           00048E  1963 	C$3203_CtrlPID3.c$84$3$53 ==.
                                   1964 ;	3203_CtrlPID3.c:84: ajustPID();           
      000559 12 04 39         [24] 1965 	lcall	_ajustPID
      00055C                       1966 00108$:
                           000491  1967 	C$3203_CtrlPID3.c$87$2$50 ==.
                                   1968 ;	3203_CtrlPID3.c:87: char2LCD(0xC4, setup, 3); 
      00055C 85 64 56         [24] 1969 	mov	_char2LCD_PARM_2,_main_setup_1_47
      00055F 75 57 03         [24] 1970 	mov	_char2LCD_PARM_3,#0x03
      000562 75 82 C4         [24] 1971 	mov	dpl,#0xc4
      000565 12 01 C1         [24] 1972 	lcall	_char2LCD
                           00049D  1973 	C$3203_CtrlPID3.c$88$2$50 ==.
                                   1974 ;	3203_CtrlPID3.c:88: char2LCD(0xCC, tempC, 3); 
      000568 85 65 56         [24] 1975 	mov	_char2LCD_PARM_2,_main_tempC_1_47
      00056B 75 57 03         [24] 1976 	mov	_char2LCD_PARM_3,#0x03
      00056E 75 82 CC         [24] 1977 	mov	dpl,#0xcc
      000571 12 01 C1         [24] 1978 	lcall	_char2LCD
                           0004A9  1979 	C$3203_CtrlPID3.c$90$2$50 ==.
                                   1980 ;	3203_CtrlPID3.c:90: char2Ser(0,errAt,3);     
      000574 85 66 5B         [24] 1981 	mov	_char2Ser_PARM_2,_main_errAt_1_47
      000577 75 5C 03         [24] 1982 	mov	_char2Ser_PARM_3,#0x03
      00057A 75 82 00         [24] 1983 	mov	dpl,#0x00
      00057D 12 03 ED         [24] 1984 	lcall	_char2Ser
                           0004B5  1985 	C$3203_CtrlPID3.c$91$2$50 ==.
                                   1986 ;	3203_CtrlPID3.c:91: int2Ser(2,ctrlAt,5);     
      000580 85 68 5D         [24] 1987 	mov	_int2Ser_PARM_2,_main_ctrlAt_1_47
      000583 85 69 5E         [24] 1988 	mov	(_int2Ser_PARM_2 + 1),(_main_ctrlAt_1_47 + 1)
      000586 75 5F 05         [24] 1989 	mov	_int2Ser_PARM_3,#0x05
      000589 75 82 02         [24] 1990 	mov	dpl,#0x02
      00058C 12 04 11         [24] 1991 	lcall	_int2Ser
                           0004C4  1992 	C$3203_CtrlPID3.c$92$2$50 ==.
                                   1993 ;	3203_CtrlPID3.c:92: char2Ser(2,pwm,3);    
      00058F 85 63 5B         [24] 1994 	mov	_char2Ser_PARM_2,_pwm
      000592 75 5C 03         [24] 1995 	mov	_char2Ser_PARM_3,#0x03
      000595 75 82 02         [24] 1996 	mov	dpl,#0x02
      000598 12 03 ED         [24] 1997 	lcall	_char2Ser
                           0004D0  1998 	C$3203_CtrlPID3.c$93$2$50 ==.
                                   1999 ;	3203_CtrlPID3.c:93: int2Ser(2, tempo,5);     
      00059B 85 6E 5D         [24] 2000 	mov	_int2Ser_PARM_2,_main_tempo_1_47
      00059E 85 6F 5E         [24] 2001 	mov	(_int2Ser_PARM_2 + 1),(_main_tempo_1_47 + 1)
      0005A1 75 5F 05         [24] 2002 	mov	_int2Ser_PARM_3,#0x05
      0005A4 75 82 02         [24] 2003 	mov	dpl,#0x02
      0005A7 12 04 11         [24] 2004 	lcall	_int2Ser
                           0004DF  2005 	C$3203_CtrlPID3.c$94$2$50 ==.
                                   2006 ;	3203_CtrlPID3.c:94: while(!TxFlag); TxFlag=0; 
      0005AA                       2007 00110$:
      0005AA 10 05 02         [24] 2008 	jbc	_TxFlag,00186$
      0005AD 80 FB            [24] 2009 	sjmp	00110$
      0005AF                       2010 00186$:
                           0004E4  2011 	C$3203_CtrlPID3.c$95$2$50 ==.
                                   2012 ;	3203_CtrlPID3.c:95: SBUF=13;                  
      0005AF 75 99 0D         [24] 2013 	mov	_SBUF,#0x0d
                           0004E7  2014 	C$3203_CtrlPID3.c$97$2$50 ==.
                                   2015 ;	3203_CtrlPID3.c:97: Ch01=0;                 
      0005B2 C2 09            [12] 2016 	clr	_Ch01
                           0004E9  2017 	C$3203_CtrlPID3.c$98$2$50 ==.
                                   2018 ;	3203_CtrlPID3.c:98: tempC=convAD08();       
      0005B4 12 02 A8         [24] 2019 	lcall	_convAD08
      0005B7 85 82 65         [24] 2020 	mov	_main_tempC_1_47,dpl
                           0004EF  2021 	C$3203_CtrlPID3.c$101$2$50 ==.
                                   2022 ;	3203_CtrlPID3.c:101: erAnt=errAt;            
      0005BA 85 66 67         [24] 2023 	mov	_main_erAnt_1_47,_main_errAt_1_47
                           0004F2  2024 	C$3203_CtrlPID3.c$102$2$50 ==.
                                   2025 ;	3203_CtrlPID3.c:102: errAt=tempC-setup;      
      0005BD E5 65            [12] 2026 	mov	a,_main_tempC_1_47
      0005BF C3               [12] 2027 	clr	c
      0005C0 95 64            [12] 2028 	subb	a,_main_setup_1_47
                           0004F7  2029 	C$3203_CtrlPID3.c$104$2$50 ==.
                                   2030 ;	3203_CtrlPID3.c:104: P=errAt; I=erAnt; D=errAt-erAnt;
      0005C2 F5 66            [12] 2031 	mov	_main_errAt_1_47,a
      0005C4 85 66 6A         [24] 2032 	mov	_main_P_1_47,_main_errAt_1_47
      0005C7 33               [12] 2033 	rlc	a
      0005C8 95 E0            [12] 2034 	subb	a,acc
      0005CA F5 6B            [12] 2035 	mov	(_main_P_1_47 + 1),a
      0005CC AA 6A            [24] 2036 	mov	r2,_main_P_1_47
      0005CE AE 6B            [24] 2037 	mov	r6,(_main_P_1_47 + 1)
      0005D0 E5 67            [12] 2038 	mov	a,_main_erAnt_1_47
      0005D2 F5 6C            [12] 2039 	mov	_main_I_1_47,a
      0005D4 33               [12] 2040 	rlc	a
      0005D5 95 E0            [12] 2041 	subb	a,acc
      0005D7 F5 6D            [12] 2042 	mov	(_main_I_1_47 + 1),a
      0005D9 AD 6C            [24] 2043 	mov	r5,_main_I_1_47
      0005DB AF 6D            [24] 2044 	mov	r7,(_main_I_1_47 + 1)
      0005DD E5 6A            [12] 2045 	mov	a,_main_P_1_47
      0005DF C3               [12] 2046 	clr	c
      0005E0 95 6C            [12] 2047 	subb	a,_main_I_1_47
      0005E2 FB               [12] 2048 	mov	r3,a
      0005E3 E5 6B            [12] 2049 	mov	a,(_main_P_1_47 + 1)
      0005E5 95 6D            [12] 2050 	subb	a,(_main_I_1_47 + 1)
      0005E7 FC               [12] 2051 	mov	r4,a
                           00051D  2052 	C$3203_CtrlPID3.c$105$2$50 ==.
                                   2053 ;	3203_CtrlPID3.c:105: P=(P*pid[0])/10; I=(I*pid[1])/10; D=(D*pid[2])/10;
      0005E8 85 60 08         [24] 2054 	mov	__mulint_PARM_2,_pid
      0005EB 75 09 00         [24] 2055 	mov	(__mulint_PARM_2 + 1),#0x00
      0005EE 8A 82            [24] 2056 	mov	dpl,r2
      0005F0 8E 83            [24] 2057 	mov	dph,r6
      0005F2 C0 07            [24] 2058 	push	ar7
      0005F4 C0 05            [24] 2059 	push	ar5
      0005F6 C0 04            [24] 2060 	push	ar4
      0005F8 C0 03            [24] 2061 	push	ar3
      0005FA 12 06 F2         [24] 2062 	lcall	__mulint
      0005FD 75 08 0A         [24] 2063 	mov	__divsint_PARM_2,#0x0a
      000600 75 09 00         [24] 2064 	mov	(__divsint_PARM_2 + 1),#0x00
      000603 12 07 5C         [24] 2065 	lcall	__divsint
      000606 AA 82            [24] 2066 	mov	r2,dpl
      000608 AE 83            [24] 2067 	mov	r6,dph
      00060A D0 03            [24] 2068 	pop	ar3
      00060C D0 04            [24] 2069 	pop	ar4
      00060E D0 05            [24] 2070 	pop	ar5
      000610 D0 07            [24] 2071 	pop	ar7
      000612 85 61 08         [24] 2072 	mov	__mulint_PARM_2,(_pid + 0x0001)
      000615 75 09 00         [24] 2073 	mov	(__mulint_PARM_2 + 1),#0x00
      000618 8D 82            [24] 2074 	mov	dpl,r5
      00061A 8F 83            [24] 2075 	mov	dph,r7
      00061C C0 06            [24] 2076 	push	ar6
      00061E C0 04            [24] 2077 	push	ar4
      000620 C0 03            [24] 2078 	push	ar3
      000622 C0 02            [24] 2079 	push	ar2
      000624 12 06 F2         [24] 2080 	lcall	__mulint
      000627 75 08 0A         [24] 2081 	mov	__divsint_PARM_2,#0x0a
      00062A 75 09 00         [24] 2082 	mov	(__divsint_PARM_2 + 1),#0x00
      00062D 12 07 5C         [24] 2083 	lcall	__divsint
      000630 AD 82            [24] 2084 	mov	r5,dpl
      000632 AF 83            [24] 2085 	mov	r7,dph
      000634 D0 02            [24] 2086 	pop	ar2
      000636 D0 03            [24] 2087 	pop	ar3
      000638 D0 04            [24] 2088 	pop	ar4
      00063A D0 06            [24] 2089 	pop	ar6
      00063C 85 62 08         [24] 2090 	mov	__mulint_PARM_2,(_pid + 0x0002)
      00063F 75 09 00         [24] 2091 	mov	(__mulint_PARM_2 + 1),#0x00
      000642 8B 82            [24] 2092 	mov	dpl,r3
      000644 8C 83            [24] 2093 	mov	dph,r4
      000646 C0 07            [24] 2094 	push	ar7
      000648 C0 06            [24] 2095 	push	ar6
      00064A C0 05            [24] 2096 	push	ar5
      00064C C0 02            [24] 2097 	push	ar2
      00064E 12 06 F2         [24] 2098 	lcall	__mulint
      000651 75 08 0A         [24] 2099 	mov	__divsint_PARM_2,#0x0a
      000654 75 09 00         [24] 2100 	mov	(__divsint_PARM_2 + 1),#0x00
      000657 12 07 5C         [24] 2101 	lcall	__divsint
      00065A AB 82            [24] 2102 	mov	r3,dpl
      00065C AC 83            [24] 2103 	mov	r4,dph
      00065E D0 02            [24] 2104 	pop	ar2
      000660 D0 05            [24] 2105 	pop	ar5
      000662 D0 06            [24] 2106 	pop	ar6
      000664 D0 07            [24] 2107 	pop	ar7
                           00059B  2108 	C$3203_CtrlPID3.c$107$2$50 ==.
                                   2109 ;	3203_CtrlPID3.c:107: ctrlAt=ctlAnt+P+I+D;      
      000666 EA               [12] 2110 	mov	a,r2
      000667 25 68            [12] 2111 	add	a,_main_ctrlAt_1_47
      000669 FA               [12] 2112 	mov	r2,a
      00066A EE               [12] 2113 	mov	a,r6
      00066B 35 69            [12] 2114 	addc	a,(_main_ctrlAt_1_47 + 1)
      00066D FE               [12] 2115 	mov	r6,a
      00066E ED               [12] 2116 	mov	a,r5
      00066F 2A               [12] 2117 	add	a,r2
      000670 FD               [12] 2118 	mov	r5,a
      000671 EF               [12] 2119 	mov	a,r7
      000672 3E               [12] 2120 	addc	a,r6
      000673 FF               [12] 2121 	mov	r7,a
      000674 EB               [12] 2122 	mov	a,r3
      000675 2D               [12] 2123 	add	a,r5
      000676 F5 68            [12] 2124 	mov	_main_ctrlAt_1_47,a
      000678 EC               [12] 2125 	mov	a,r4
      000679 3F               [12] 2126 	addc	a,r7
      00067A F5 69            [12] 2127 	mov	(_main_ctrlAt_1_47 + 1),a
                           0005B1  2128 	C$3203_CtrlPID3.c$108$2$50 ==.
                                   2129 ;	3203_CtrlPID3.c:108: if(ctrlAt>255) ctrlAt=255;
      00067C C3               [12] 2130 	clr	c
      00067D 74 FF            [12] 2131 	mov	a,#0xff
      00067F 95 68            [12] 2132 	subb	a,_main_ctrlAt_1_47
      000681 74 80            [12] 2133 	mov	a,#(0x00 ^ 0x80)
      000683 85 69 F0         [24] 2134 	mov	b,(_main_ctrlAt_1_47 + 1)
      000686 63 F0 80         [24] 2135 	xrl	b,#0x80
      000689 95 F0            [12] 2136 	subb	a,b
      00068B 50 06            [24] 2137 	jnc	00114$
      00068D 75 68 FF         [24] 2138 	mov	_main_ctrlAt_1_47,#0xff
      000690 75 69 00         [24] 2139 	mov	(_main_ctrlAt_1_47 + 1),#0x00
      000693                       2140 00114$:
                           0005C8  2141 	C$3203_CtrlPID3.c$109$2$50 ==.
                                   2142 ;	3203_CtrlPID3.c:109: if(ctrlAt<0) ctrlAt=0;    
      000693 E5 69            [12] 2143 	mov	a,(_main_ctrlAt_1_47 + 1)
      000695 30 E7 05         [24] 2144 	jnb	acc.7,00116$
      000698 E4               [12] 2145 	clr	a
      000699 F5 68            [12] 2146 	mov	_main_ctrlAt_1_47,a
      00069B F5 69            [12] 2147 	mov	(_main_ctrlAt_1_47 + 1),a
      00069D                       2148 00116$:
                           0005D2  2149 	C$3203_CtrlPID3.c$110$1$47 ==.
                                   2150 ;	3203_CtrlPID3.c:110: pwm=ctrlAt*199/255;       
      00069D 85 68 08         [24] 2151 	mov	__mulint_PARM_2,_main_ctrlAt_1_47
      0006A0 85 69 09         [24] 2152 	mov	(__mulint_PARM_2 + 1),(_main_ctrlAt_1_47 + 1)
      0006A3 90 00 C7         [24] 2153 	mov	dptr,#0x00c7
      0006A6 12 06 F2         [24] 2154 	lcall	__mulint
      0006A9 75 08 FF         [24] 2155 	mov	__divsint_PARM_2,#0xff
      0006AC 75 09 00         [24] 2156 	mov	(__divsint_PARM_2 + 1),#0x00
      0006AF 12 07 5C         [24] 2157 	lcall	__divsint
      0006B2 AE 82            [24] 2158 	mov	r6,dpl
      0006B4 AF 83            [24] 2159 	mov	r7,dph
      0006B6 8E 63            [24] 2160 	mov	_pwm,r6
                           0005ED  2161 	C$3203_CtrlPID3.c$113$2$50 ==.
                                   2162 ;	3203_CtrlPID3.c:113: while(!umSeg); umSeg=0; tempo++;
      0006B8                       2163 00117$:
      0006B8 10 00 02         [24] 2164 	jbc	_umSeg,00189$
      0006BB 80 FB            [24] 2165 	sjmp	00117$
      0006BD                       2166 00189$:
      0006BD 05 6E            [12] 2167 	inc	_main_tempo_1_47
      0006BF E4               [12] 2168 	clr	a
      0006C0 B5 6E 02         [24] 2169 	cjne	a,_main_tempo_1_47,00190$
      0006C3 05 6F            [12] 2170 	inc	(_main_tempo_1_47 + 1)
      0006C5                       2171 00190$:
      0006C5 02 05 32         [24] 2172 	ljmp	00121$
                           0005FD  2173 	C$3203_CtrlPID3.c$114$1$47 ==.
                           0005FD  2174 	XG$main$0$0 ==.
      0006C8 22               [24] 2175 	ret
                                   2176 	.area CSEG    (CODE)
                                   2177 	.area CONST   (CODE)
                           000000  2178 G$setLCD4$0$0 == .
      000798                       2179 _setLCD4:
      000798 28                    2180 	.db #0x28	; 40
      000799 06                    2181 	.db #0x06	; 6
      00079A 0E                    2182 	.db #0x0e	; 14
      00079B 01                    2183 	.db #0x01	; 1
                           000004  2184 G$Tit1$0$0 == .
      00079C                       2185 _Tit1:
      00079C 70 20 20 20 20 69 20  2186 	.ascii "p    i    d "
             20 20 20 64 20
      0007A8 00                    2187 	.db 0x00
                           000011  2188 G$Tit2$0$0 == .
      0007A9                       2189 _Tit2:
      0007A9 53 65 74 70 20 20 20  2190 	.ascii "Setp    Temp"
             20 54 65 6D 70
      0007B5 00                    2191 	.db 0x00
                                   2192 	.area XINIT   (CODE)
                                   2193 	.area CABS    (ABS,CODE)
