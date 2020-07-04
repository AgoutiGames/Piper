<?xml version="1.0" encoding="UTF-8"?>
<tileset version="1.2" tiledversion="1.3.3" name="pipes" tilewidth="16" tileheight="16" tilecount="4" columns="2">
 <image source="../tilesets/pipes.png" width="32" height="32"/>
 <tile id="0" type="ACTOR_ANIMATION">
  <properties>
   <property name="ACTOR_NAME" value="DefaultPipe"/>
   <property name="ANIMATION_TYPE" value="DEFAULT"/>
   <property name="DIRECTION" value="DOWN_RIGHT"/>
  </properties>
  <objectgroup draworder="index" id="2">
   <object id="1" name="DRAG" x="0" y="0" width="16" height="16"/>
   <object id="2" x="4" y="4" width="12" height="12"/>
   <object id="3" name="P1" x="4" y="14" width="8" height="2"/>
   <object id="4" name="P2" x="14" y="4" width="2" height="8"/>
   <object id="5" name="FAIL" x="5" y="5" width="7" height="7"/>
  </objectgroup>
 </tile>
 <tile id="1" type="ACTOR_ANIMATION">
  <properties>
   <property name="ACTOR_NAME" value="DefaultPipe"/>
   <property name="ANIMATION_TYPE" value="DEFAULT"/>
   <property name="DIRECTION" value="DOWN_LEFT"/>
  </properties>
  <objectgroup draworder="index" id="2">
   <object id="1" name="DRAG" x="0" y="0" width="16" height="16"/>
   <object id="2" x="0" y="4" width="12" height="12"/>
   <object id="3" name="P1" x="4" y="14" width="8" height="2"/>
   <object id="4" name="P2" x="0" y="4" width="2" height="8"/>
   <object id="5" name="FAIL" x="4" y="5" width="7" height="7"/>
  </objectgroup>
 </tile>
 <tile id="2" type="ACTOR_ANIMATION">
  <properties>
   <property name="ACTOR_NAME" value="DefaultPipe"/>
   <property name="ANIMATION_TYPE" value="DEFAULT"/>
   <property name="DIRECTION" value="UP_RIGHT"/>
  </properties>
  <objectgroup draworder="index" id="2">
   <object id="1" name="DRAG" x="0" y="0" width="16" height="16"/>
   <object id="2" x="4" y="0" width="12" height="12"/>
   <object id="3" name="P1" x="4" y="0" width="8" height="2"/>
   <object id="4" name="P2" x="14" y="4" width="2" height="8"/>
   <object id="5" name="FAIL" x="5" y="4" width="7" height="7"/>
  </objectgroup>
 </tile>
 <tile id="3" type="ACTOR_ANIMATION">
  <properties>
   <property name="ACTOR_NAME" value="DefaultPipe"/>
   <property name="ANIMATION_TYPE" value="DEFAULT"/>
   <property name="DIRECTION" value="UP_LEFT"/>
  </properties>
  <objectgroup draworder="index" id="2">
   <object id="1" name="DRAG" x="0" y="0" width="16" height="16"/>
   <object id="2" x="0" y="0" width="12" height="12"/>
   <object id="3" name="P1" x="4" y="0" width="8" height="2"/>
   <object id="4" name="P2" x="0" y="4" width="2" height="8"/>
   <object id="5" name="FAIL" x="4" y="4" width="7" height="7"/>
  </objectgroup>
 </tile>
</tileset>
