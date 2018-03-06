<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE eagle SYSTEM "eagle.dtd">
<eagle version="8.6.0">
<drawing>
<settings>
<setting alwaysvectorfont="no"/>
<setting verticaltext="up"/>
</settings>
<grid distance="0.1" unitdist="inch" unit="inch" style="lines" multiple="1" display="no" altdistance="0.01" altunitdist="inch" altunit="inch"/>
<layers>
<layer number="88" name="SimResults" color="9" fill="1" visible="yes" active="yes"/>
<layer number="89" name="SimProbes" color="9" fill="1" visible="yes" active="yes"/>
<layer number="90" name="Modules" color="5" fill="1" visible="yes" active="yes"/>
<layer number="91" name="Nets" color="2" fill="1" visible="yes" active="yes"/>
<layer number="92" name="Busses" color="1" fill="1" visible="yes" active="yes"/>
<layer number="93" name="Pins" color="2" fill="1" visible="yes" active="yes"/>
<layer number="94" name="Symbols" color="4" fill="1" visible="yes" active="yes"/>
<layer number="95" name="Names" color="7" fill="1" visible="yes" active="yes"/>
<layer number="96" name="Values" color="7" fill="1" visible="yes" active="yes"/>
<layer number="97" name="Info" color="7" fill="1" visible="yes" active="yes"/>
<layer number="98" name="Guide" color="6" fill="1" visible="yes" active="yes"/>
</layers>
<schematic xreflabel="%F%N/%S.%C%R" xrefpart="/%S.%C%R">
<libraries>
</libraries>
<attributes>
</attributes>
<variantdefs>
</variantdefs>
<classes>
<class number="0" name="default" width="0" drill="0">
</class>
</classes>
<modules>
<module name="HEF4050BT" prefix="" dx="30.48" dy="20.32">
<ports>
<port name="NC" side="top" coord="-12.7" direction="io"/>
<port name="6Y" side="top" coord="-7.62" direction="io"/>
<port name="6A" side="top" coord="-2.54" direction="io"/>
<port name="NC1" side="top" coord="0" direction="io"/>
<port name="5Y" side="top" coord="2.54" direction="io"/>
<port name="5A" side="top" coord="5.08" direction="io"/>
<port name="4Y" side="top" coord="7.62" direction="io"/>
<port name="4A" side="top" coord="10.16" direction="io"/>
<port name="VIN" side="bottom" coord="-12.7" direction="io"/>
<port name="1Y" side="bottom" coord="-10.16" direction="io"/>
<port name="1A" side="bottom" coord="-7.62" direction="io"/>
<port name="2Y" side="bottom" coord="-2.54" direction="io"/>
<port name="2A" side="bottom" coord="0" direction="io"/>
<port name="3Y" side="bottom" coord="5.08" direction="io"/>
<port name="3A" side="bottom" coord="7.62" direction="io"/>
<port name="GND" side="bottom" coord="12.7" direction="io"/>
</ports>
<variantdefs>
</variantdefs>
<parts>
</parts>
<sheets>
<sheet>
<plain>
<rectangle x1="-7.62" y1="50.8" x2="53.34" y2="73.66" layer="91"/>
<circle x="-2.54" y="68.58" radius="2.54" width="0.254" layer="88"/>
<circle x="5.08" y="68.58" radius="2.54" width="0.254" layer="88"/>
<circle x="12.7" y="68.58" radius="2.54" width="0.254" layer="88"/>
<circle x="20.32" y="68.58" radius="2.54" width="0.254" layer="88"/>
<circle x="27.94" y="68.58" radius="2.54" width="0.254" layer="88"/>
<circle x="35.56" y="68.58" radius="2.54" width="0.254" layer="88"/>
<circle x="43.18" y="68.58" radius="2.54" width="0.254" layer="88"/>
<circle x="50.8" y="68.58" radius="2.54" width="0.254" layer="88"/>
<circle x="-2.54" y="55.88" radius="2.54" width="0.254" layer="88"/>
<circle x="5.08" y="55.88" radius="2.54" width="0.254" layer="88"/>
<circle x="12.7" y="55.88" radius="2.54" width="0.254" layer="88"/>
<circle x="20.32" y="55.88" radius="2.54" width="0.254" layer="88"/>
<circle x="27.94" y="55.88" radius="2.54" width="0.254" layer="88"/>
<circle x="35.56" y="55.88" radius="2.54" width="0.254" layer="88"/>
<circle x="43.18" y="55.88" radius="2.54" width="0.254" layer="88"/>
<circle x="50.8" y="55.88" radius="2.54" width="0.254" layer="88"/>
</plain>
<instances>
</instances>
<busses>
</busses>
<nets>
</nets>
</sheet>
</sheets>
</module>
</modules>
<parts>
</parts>
<sheets>
<sheet>
<plain>
<rectangle x1="-17.78" y1="-12.7" x2="0" y2="88.9" layer="91"/>
<circle x="-12.7" y="81.28" radius="2.54" width="0.1524" layer="88"/>
<circle x="-5.08" y="81.28" radius="2.54" width="0.1524" layer="88"/>
<circle x="-12.7" y="73.66" radius="2.54" width="0.1524" layer="88"/>
<circle x="-5.08" y="73.66" radius="2.54" width="0.1524" layer="88"/>
<circle x="-12.7" y="66.04" radius="2.54" width="0.1524" layer="88"/>
<circle x="-5.08" y="66.04" radius="2.54" width="0.1524" layer="88"/>
<circle x="-12.7" y="53.34" radius="2.54" width="0.1524" layer="88"/>
<circle x="-5.08" y="53.34" radius="2.54" width="0.1524" layer="88"/>
<circle x="-5.08" y="45.72" radius="2.54" width="0.1524" layer="88"/>
<circle x="-12.7" y="45.72" radius="2.54" width="0.1524" layer="88"/>
<circle x="-12.7" y="35.56" radius="2.54" width="0.1524" layer="88"/>
<circle x="-5.08" y="35.56" radius="2.54" width="0.1524" layer="88"/>
<circle x="-12.7" y="25.4" radius="2.54" width="0.1524" layer="88"/>
<circle x="-5.08" y="25.4" radius="2.54" width="0.1524" layer="88"/>
<circle x="-12.7" y="15.24" radius="2.54" width="0.1524" layer="88"/>
<circle x="-5.08" y="15.24" radius="2.54" width="0.1524" layer="88"/>
<circle x="-12.7" y="5.08" radius="2.54" width="0.1524" layer="88"/>
<circle x="-5.08" y="5.08" radius="2.54" width="0.1524" layer="88"/>
<circle x="-12.7" y="-5.08" radius="2.54" width="0.1524" layer="88"/>
<circle x="-5.08" y="-5.08" radius="2.54" width="0.1524" layer="88"/>
<text x="-25.4" y="73.66" size="1.778" layer="88">VIN</text>
<text x="-25.4" y="66.04" size="1.778" layer="88">VIN</text>
<text x="-25.4" y="81.28" size="1.778" layer="88">VIN</text>
<wire x1="-5.08" y1="66.04" x2="45.72" y2="66.04" width="0.8128" layer="94"/>
<wire x1="45.72" y1="66.04" x2="45.72" y2="27.94" width="0.8128" layer="94"/>
<wire x1="45.72" y1="27.94" x2="53.34" y2="27.94" width="0.8128" layer="94"/>
<wire x1="53.34" y1="27.94" x2="53.34" y2="30.48" width="0.8128" layer="94"/>
<text x="-25.4" y="-7.62" size="1.778" layer="94">gnd</text>
<text x="-25.4" y="-7.62" size="1.778" layer="94">gnd</text>
<text x="-25.4" y="2.54" size="1.778" layer="94">gnd</text>
<text x="-25.4" y="12.7" size="1.778" layer="94">gnd</text>
<text x="-25.4" y="22.86" size="1.778" layer="94">gnd</text>
<wire x1="-12.7" y1="81.28" x2="-12.7" y2="66.04" width="0.8128" layer="94"/>
<wire x1="-5.08" y1="81.28" x2="-5.08" y2="66.04" width="0.8128" layer="94"/>
<wire x1="-12.7" y1="25.4" x2="-12.7" y2="-5.08" width="0.8128" layer="94"/>
<wire x1="-5.08" y1="25.4" x2="-5.08" y2="-5.08" width="0.8128" layer="94"/>
<wire x1="-12.7" y1="25.4" x2="-5.08" y2="25.4" width="0.8128" layer="94"/>
<wire x1="-12.7" y1="45.72" x2="-33.02" y2="45.72" width="0.8128" layer="94"/>
<wire x1="-33.02" y1="45.72" x2="-33.02" y2="91.44" width="0.8128" layer="94"/>
<wire x1="-33.02" y1="91.44" x2="63.5" y2="91.44" width="0.8128" layer="94"/>
<wire x1="63.5" y1="91.44" x2="63.5" y2="60.96" width="0.8128" layer="94"/>
</plain>
<moduleinsts>
<moduleinst name="HEF4050BT1" module="HEF4050BT" x="66.04" y="45.72"/>
</moduleinsts>
<instances>
</instances>
<busses>
<bus name="B$1">
<segment>
<wire x1="-12.7" y1="81.28" x2="-5.08" y2="81.28" width="0.762" layer="92"/>
</segment>
</bus>
<bus name="B$2">
<segment>
<wire x1="-12.7" y1="73.66" x2="-5.08" y2="73.66" width="0.762" layer="92"/>
</segment>
</bus>
<bus name="B$3">
<segment>
<wire x1="-12.7" y1="66.04" x2="-5.08" y2="66.04" width="0.762" layer="92"/>
</segment>
</bus>
<bus name="B$4">
<segment>
<wire x1="-12.7" y1="-5.08" x2="66.04" y2="-5.08" width="0.762" layer="92"/>
<wire x1="66.04" y1="-5.08" x2="73.66" y2="-5.08" width="0.762" layer="92"/>
<wire x1="73.66" y1="-5.08" x2="78.74" y2="-5.08" width="0.762" layer="92"/>
<wire x1="78.74" y1="-5.08" x2="78.74" y2="30.48" width="0.762" layer="92"/>
<wire x1="73.66" y1="30.48" x2="73.66" y2="-5.08" width="0.762" layer="92"/>
<wire x1="66.04" y1="30.48" x2="66.04" y2="-5.08" width="0.762" layer="92"/>
</segment>
</bus>
<bus name="B$5">
<segment>
<wire x1="-12.7" y1="5.08" x2="-5.08" y2="5.08" width="0.762" layer="92"/>
</segment>
</bus>
<bus name="B$6">
<segment>
<wire x1="-12.7" y1="15.24" x2="-5.08" y2="15.24" width="0.762" layer="92"/>
</segment>
</bus>
<bus name="B$7">
<segment>
<wire x1="-12.7" y1="25.4" x2="-5.08" y2="25.4" width="0.762" layer="92"/>
</segment>
</bus>
<bus name="B$8">
<segment>
<wire x1="-12.7" y1="30.48" x2="43.18" y2="30.48" width="0.762" layer="92"/>
<wire x1="43.18" y1="30.48" x2="43.18" y2="25.4" width="0.762" layer="92"/>
<wire x1="43.18" y1="25.4" x2="58.42" y2="25.4" width="0.762" layer="92"/>
<wire x1="58.42" y1="25.4" x2="58.42" y2="30.48" width="0.762" layer="92"/>
<wire x1="-12.7" y1="30.48" x2="-12.7" y2="35.56" width="0.762" layer="92"/>
</segment>
</bus>
<bus name="B$9">
<segment>
<wire x1="-12.7" y1="53.34" x2="-30.48" y2="53.34" width="0.762" layer="92"/>
<wire x1="-30.48" y1="53.34" x2="-30.48" y2="96.52" width="0.762" layer="92"/>
<wire x1="-30.48" y1="96.52" x2="71.12" y2="96.52" width="0.762" layer="92"/>
<wire x1="71.12" y1="96.52" x2="71.12" y2="60.96" width="0.762" layer="92"/>
</segment>
</bus>
<bus name="B$10">
<segment>
<wire x1="-5.08" y1="53.34" x2="40.64" y2="53.34" width="0.762" layer="92"/>
<wire x1="40.64" y1="53.34" x2="40.64" y2="73.66" width="0.762" layer="92"/>
<wire x1="40.64" y1="73.66" x2="76.2" y2="73.66" width="0.762" layer="92"/>
<wire x1="76.2" y1="73.66" x2="76.2" y2="60.96" width="0.762" layer="92"/>
</segment>
</bus>
</busses>
<nets>
<net name="N$1" class="0">
<segment>
<wire x1="-12.7" y1="45.72" x2="-33.02" y2="45.72" width="0.1524" layer="91"/>
<wire x1="-33.02" y1="45.72" x2="-33.02" y2="91.44" width="0.1524" layer="91"/>
<wire x1="-33.02" y1="91.44" x2="63.5" y2="91.44" width="0.1524" layer="91"/>
<portref moduleinst="HEF4050BT1" port="6A"/>
<wire x1="63.5" y1="91.44" x2="63.5" y2="60.96" width="0.1524" layer="91"/>
</segment>
</net>
</nets>
</sheet>
</sheets>
</schematic>
</drawing>
</eagle>
