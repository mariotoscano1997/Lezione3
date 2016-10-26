<?php
if(isset($_POST['user']) && isset($_POST['pass'])){
	if($_POST['user']==='Mario' && $_POST['pass']==='Ciao'){
		echo 'Sei entrato nella pagina di amministrazione '.$_POST['user'];
		echo "<br><img src='assets/img/maurizio.jpg'>";
	}
	else
	echo 'Credenziali errate';
}
else{
	echo 'Eseguire il login per poter vedere il contenuto di questa pagina';
}