#!/usr/bin/perl

# Fichero para automatización de ejecución por lotes de un ejecutable
# dado parámetros de entrada.
# $ --> variable
# @ --> vector
$repeticiones = 30; #30 repeticiones por tamaño de matriz
@ejecutables = ("matricesApp");
@matrizSize = ("3", "4", "5", "10", "100", "400", "800", "1000", "2500", "5000");
$path = "/home/{path}/Algorithms/enteros/"; #reemplazar {path} por la ruta donde se encuentra ubicado el proyecto (ej: /home/pedro/paralela/Algorithms/enteros/) IMPORTANTE: la ruta debe finalizar con / al final

foreach $exe (@ejecutables) {
	foreach $size (@matrizSize) {
		$fichero = "$path"."Soluciones/"."$exe"."-size"."$size";
		#print("$fichero\n");
		for ($i=0; $i<$repeticiones; $i++) {
			print("$path$exe $size\n"); #sabemos en qué repetición va nuestro proceso
			system("$path$exe $size >> $fichero");
		}
	}
}
exit(1);
