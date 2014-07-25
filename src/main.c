#include <config.h>
#include <stdio.h>
#include <glib.h>

#include <wavpack/wavpack.h>

#define MAXLEN 1024
void  read_wavpack_file (gchar *filename)
{
    WavpackContext *wpc;
    gchar *field;
    guint length;

    int open_flags = OPEN_TAGS;

    wpc = WavpackOpenFileInput(filename, NULL, open_flags, 0);

    if ( wpc == NULL ) {
        fprintf (stderr, "Error: open %s as wavpack failed\n", filename);
        return;
    }

    /* title */
    field = g_malloc0(sizeof(char) * MAXLEN);
    length = WavpackGetTagItem(wpc, "title", field, MAXLEN);
    if ( length > 0 )
        printf ("title: %s\n", field);

    g_free (field);
    WavpackCloseFile(wpc);
}

int main (int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage:: %s wavpack_file\n", argv[0]);
        return 1;
    }
    else
    {
        while (--argc)
            read_wavpack_file(*++argv);
    }

    return 0;
}


