#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <gtk/gtk.h>
#include <gtk/gtkx.h>
#include <ctype.h>
#include <math.h>

// we allocate global GtkWidgets for use in placing them onto our GUI
GtkWidget *window1;
GtkWidget *fixed1;
GtkWidget *button1;
GtkWidget *button2;
GtkWidget *button3;
GtkWidget *button4;
GtkWidget *button5;
GtkWidget *button6;
GtkWidget *button7;
GtkWidget *button8;
GtkWidget *button9;
GtkWidget *label1;

GtkBuilder *builder;




int main(int argc, char *argv[]){
	
	gtk_init(&argc, &argv);	// initializing gtk

	builder = gtk_builder_new_from_file ("example.glade");	// we read from our .glade (basically an xml file)
	window1 = GTK_WIDGET(gtk_builder_get_object(builder, "window1"));

	g_signal_connect(window1, "destroy", G_CALLBACK(gtk_main_quit), NULL);
	gtk_builder_connect_signals(builder, NULL);


	fixed1 = GTK_WIDGET(gtk_builder_get_object(builder, "fixed1"));
	button1 = GTK_WIDGET(gtk_builder_get_object(builder, "button1"));
	button2 = GTK_WIDGET(gtk_builder_get_object(builder, "button2"));
	button3 = GTK_WIDGET(gtk_builder_get_object(builder, "button3"));
	button4 = GTK_WIDGET(gtk_builder_get_object(builder, "button4"));
	button5 = GTK_WIDGET(gtk_builder_get_object(builder, "button5"));
	button6 = GTK_WIDGET(gtk_builder_get_object(builder, "button6"));
	button7 = GTK_WIDGET(gtk_builder_get_object(builder, "button7"));
	button8 = GTK_WIDGET(gtk_builder_get_object(builder, "button8"));
	button9 = GTK_WIDGET(gtk_builder_get_object(builder, "button9"));
	label1 = GTK_WIDGET(gtk_builder_get_object(builder, "label1"));

	gtk_widget_show(window1);
	gtk_main();

	return EXIT_SUCCESS;
}




void on_button1_clicked (GtkButton *b){
	gtk_label_set_text (GTK_LABEL(label1), (const gchar*) "Uno");
}

void on_button2_clicked (GtkButton *b){
	gtk_label_set_text (GTK_LABEL(label1), (const gchar*) "Dos");
}

void on_button3_clicked (GtkButton *b){
	gtk_label_set_text (GTK_LABEL(label1), (const gchar*) "Tres");
}

void on_button4_clicked (GtkButton *b){
	gtk_label_set_text (GTK_LABEL(label1), (const gchar*) "cuatro");
}

void on_button5_clicked (GtkButton *b){
	gtk_label_set_text (GTK_LABEL(label1), (const gchar*) "cinco");
}

void on_button6_clicked (GtkButton *b){
	gtk_label_set_text (GTK_LABEL(label1), (const gchar*) "seis");
}

void on_button7_clicked (GtkButton *b){
	gtk_label_set_text (GTK_LABEL(label1), (const gchar*) "seite");
}

void on_button8_clicked (GtkButton *b){
	gtk_label_set_text (GTK_LABEL(label1), (const gchar*) "ocho");
}

void on_button9_clicked (GtkButton *b){
	gtk_label_set_text (GTK_LABEL(label1), (const gchar*) "nueve");
}














