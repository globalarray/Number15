<?php

$countNumbers = intval(trim(fgets(STDIN)));
$finalNumber = 0;
for ($i = 0; $i < $countNumbers; $i++) {
	$number = intval(trim(fgets(STDIN)));
	if (!($number % 2)) {
		if ($number < $finalNumber || $finalNumber === 0) {
			$finalNumber = $number;
		}
	}
}
echo($finalNumber);
?>