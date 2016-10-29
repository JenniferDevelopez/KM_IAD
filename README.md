<center><h3>KM Interaction Design - Technical
Yassine Raddahi<h3></center>


<h1>Attraction to Interaction:</h1>
The relation between exhibition-visitors’ behavior and the properties of the Artefacts.

<h2>Het project:</h2>

Een interactief schilderij die de gebruiker de mogelijkheid geeft om het beeld te vervormen. Hieronder een video om een impressie te krijgen (password: HKU).

<iframe src="https://player.vimeo.com/video/189380210" width="640" height="360" frameborder="0" webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>
<p><a href="https://vimeo.com/189380210">MentalModel_Video720</a> at Vimeo.

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
	<li>Het enige wat je nu nog moet doen, is de regel 'serial.setup("<b>COM6</b>", 9600);' veranderen in de ofApp.cpp file, naar de USB poort, waar jij je Arduino hebt aangesloten. Om te weten hoe deze poort heet, kun je simpelweg, je Arduino IDE openen en helemaal rechts onderaan zie je in het balkje een "COM of  /dev/cu.usbmodem/number" Poort staan met een getal. That's it!</li>
	<li>Nu hoef je alleen nog je code te runnen in 'release-mode' binnen Visual Studio of XCode en klaar!</li>
	<li> Nu kun je uitproberen!</li>
	<li> Als je Videoloop wilt veranderen, moet je de regel 'video.load("movies/<i>bulge1080.mp4</i>");' in ofApp.cpp, veranderen naar <b>balls1080.mp4</b> . Ook kun je natuurlijk je eigen footage gebruiken door deze in de data folder onder movies te zetten. Let er wel op dat OpenFrameworks heel kieskeurig is met videobestand format (codecs). Kies H.264 / 60 fps, als uitput, met een zo laag mogelijk, bestandsgrootte.</li>
</ul>

<h2>About my project:</h2>

De video's heb ik zelf gerendered in Cinema 4D. De animaties zijn loops, met abstracten visuals. Door abstracte vormen, contrast en fijne details te gebruiken, wil ik de gebruiker dichtbij laten komen. </br>
Het uitgangspunt is een projectie op canvas in museum bijvoorbeeld. Met als doel interactie te stimuleren en de gebruik een bepaalde invloed/input te geven.</br>

<p>
Het bijgaande onderzoek kun je vinden in de onderstaande link:

</br>http://studenthome.hku.nl/~Yassine.Raddahi/RaddahiYassine_InteractionDesign_Research_Ethnografisch-Onderzoek_v1.pdf
</p>