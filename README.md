<center><h3>KM Interaction Design - Technical
Yassine Raddahi<h3></center>


<h1>Attraction to Interaction:</h1>
The relation between exhibition-visitors’ behavior and the properties of the Artefacts.


<h2>Het project:</h2>

Een interactief schilderij die de gebruiker de mogelijkheid geeft om het beeld te vervormen.

<h2>Benodigdheden:</h2>

<ul>
	<li>IDE met OpenFrameworks support (e.g. Visual Studio(Win), XCode (Mac))</li>

	<li>OpenFrameworks Library:</br>
	http://openframeworks.cc/download/</li>

	<li>K-Lite Codec Pack Full  12.10 (Full):</br>
	http://filehippo.com/download_klite_codec_pack/67445/</li>

	<li>Arduino (5v)</li>

	<li>Ultrasonic Sensor - HC-SR04</li>

	<li>Arduino NewPing Library:</br>
	http://playground.arduino.cc/Code/NewPing</li>

	<li>Arduino Code ( /Arduino/serialPingOF/.. )</li>

	<li>Videoloop in H.264 / 60 fps format</li>

	<li>OpenFrameworks Code ( /MappingMotionControl/.. )</li>
</ul>

<h2>Instructies:</h2>

<ul>
<li>Installeer de arduino library en upload vervolgens de Arduino code naar je Arduino Controller.</li>

<li>Open je IDE en vervolgens open je de Visual Studio project file. 
</br>Voor XCode gebruikers: verwijder alle bestanden in het mapje 'MappingMotionControl' behalve de 'src' en 'bin' mapjes. </br>Open vervolgens de Project Generator in de OpenFrameworks folder. (of_v0.9.3/ProjectGenerator/..)</br>
Kies vervolgens import, en daarna kies je de folder 'MappingMotionControl'. Vervolgens klik je op de update button, waardoor de project generator automatische de bestanden voor je genereerd.</li>
<li>Als het goed is, heb je nu een project-file die je kan open met Visual Studio of XCode. Als je de project-file opent, zie je in de hierarchy/project-files list, 'ofApp.cpp' en 'ofApp.h' staan. Hierin staat alle code die je nodig hebt. Mocht je de resolutie willen veranderen van het scherm, kun je dat doen in de 'ofMain.cpp'</li>
<li>Vrijwel alle code heeft commentaar dus voor instructies binnen de code, kun je dat daar terug vinden. </li>
<li>Het enige wat je nu nog moet doen, is de regel 'serial.setup("<b>COM6</b>", 9600);' veranderen in de ofApp.cpp file, naar de USB poort, waar jij je Arduino hebt aangesloten. Om te weten hoe deze poort heet, kun je simpelweg, je Arduino IDE openen en helemaal rechts onderaan zie je in het balkje een "COM" Poort staan met een getal. That's it!</li>
<li>Nu hoef je alleen nog je code te runnen in 'release-mode' binnen Visual Studio of XCode en voila!</li>

</ul>
