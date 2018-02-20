ENTRY (start)

SECTIONS
{
	. = 0x40000000;

	.text BLOCK(4K) : ALIGN(4K) {
		*(.text)
	}

	. = 0x80000000;

	.data BLOCK(4K) : ALIGN(4K) {
		*(.data)
	}

	.rodata : ALIGN(4K) {
		*(.rodata)
	}

	.bss : ALIGN(4K) {
		*(.bss)
	}

	.data.other : ALIGN(4K) {
		*.*
	}
}
