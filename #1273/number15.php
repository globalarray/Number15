<?php
$summaryNumbers = 0;

for ($i = 0; $i < 1000; $i++) {
	$inputNumber = intval(trim(fgets(STDIN)));
	if (!$inputNumber) {
		break;
	}
	if (!($inputNumber % 8) && $inputNumber > 9 && $inputNumber < 100) {
		$summaryNumbers += $inputNumber;
	}
}
echo($summaryNumbers);
?>