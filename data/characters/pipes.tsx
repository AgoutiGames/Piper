<?xml version="1.0" encoding="UTF-8"?>
<tileset version="1.2" tiledversion="1.3.3" name="pipes" tilewidth="16" tileheight="16" tilecount="4" columns="2">
 <image source="../tilesets/pipes.png" width="32" height="32"/>
 <tile id="0" type="ACTOR_TEMPLATE">
  <properties>
   <property name="ACTOR_NAME" value="down_right_pipe"/>
   <property name="type" value="AngledPipe"/>
  </properties>
  <objectgroup draworder="index" id="2">
   <object id="1" name="DRAG" x="0" y="0" width="16" height="16"/>
   <object id="2" x="4" y="4" width="12" height="12"/>
  </objectgroup>
 </tile>
 <tile id="1" type="ACTOR_TEMPLATE">
  <properties>
   <property name="ACTOR_NAME" value="down_left_pipe"/>
   <property name="type" value="AngledPipe"/>
  </properties>
  <objectgroup draworder="index" id="2">
   <object id="1" name="DRAG" x="0" y="0" width="16" height="16"/>
   <object id="2" x="0" y="4" width="12" height="12"/>
  </objectgroup>
 </tile>
 <tile id="2" type="ACTOR_TEMPLATE">
  <properties>
   <property name="ACTOR_NAME" value="up_right_pipe"/>
   <property name="type" value="AngledPipe"/>
  </properties>
  <objectgroup draworder="index" id="2">
   <object id="1" name="DRAG" x="0" y="0" width="16" height="16"/>
   <object id="2" x="4" y="0" width="12" height="12"/>
  </objectgroup>
 </tile>
 <tile id="3" type="ACTOR_TEMPLATE">
  <properties>
   <property name="ACTOR_NAME" value="up_left_pipe"/>
   <property name="type" value="AngledPipe"/>
  </properties>
  <objectgroup draworder="index" id="2">
   <object id="1" name="DRAG" x="0" y="0" width="16" height="16"/>
   <object id="2" x="0" y="0" width="12" height="12"/>
  </objectgroup>
 </tile>
</tileset>
